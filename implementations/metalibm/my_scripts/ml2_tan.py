#!/usr/bin/env python3


import sollya

from metalibm_core.core.simple_scalar_function import ScalarUnaryFunction
from metalibm_core.core.ml_function import DefaultArgTemplate
from metalibm_core.utility.ml_template import ML_NewArgTemplate
from metalibm_core.core.polynomials import PolynomialSchemeEvaluator, Polynomial
from metalibm_core.core.ml_formats import ML_Binary64

from metalibm_core.core.ml_operations import *


import os
import os.path as path
import sys

PYTHON_DIR = path.abspath(path.dirname(__file__))
HND_DIR = path.split(PYTHON_DIR)[0]
IMP_DIR = path.split(HND_DIR)[0]
GIT_DIR = path.split(IMP_DIR)[0]
SRC_DIR = path.join(GIT_DIR, "src")
GEL_DIR = path.join(GIT_DIR, "requirements", "gelpia", "bin")
sys.path.append(SRC_DIR)
sys.path.append(GEL_DIR)

path_addition = path.join(GIT_DIR, "requirements", "FPTaylor")
current = os.environ["PATH"]
os.environ["PATH"] = "{}:{}".format(path_addition, current)

import fptaylor
from utils import Logger, Timer

import json
Logger.set_log_level(Logger.NONE)




class ML2_Tangential(ScalarUnaryFunction):

    def __init__(self, args=DefaultArgTemplate):
        super().__init__(args)
        self.poly_degree = args.poly_degree
        self.skip_reduction = args.skip_reduction

    @staticmethod
    def get_default_args(**kw):
        default_args_tan = {
            "output_file": "m2l_tan.c",
            "function_name": "ml2_tan",
            "precision": ML_Binary64,
            "poly_degree": 1,
            "skip_reduction": False,
        }
        default_args_tan.update(kw)
        return DefaultArgTemplate(**default_args_tan)

    def generate_scheme(self):
        x = self.implementation.add_input_variable("x", self.precision)

        n_qpi = self.precision.round_sollya_object(sollya.pi/4, sollya.RN)

        if not self.skip_reduction:
            abs_x = Abs(x, precision=self.precision, tag="abs_x")

            n_one = self.precision.round_sollya_object(1, sollya.RN)
            one = Constant(n_one, precision=self.precision, tag="one")

            sign_x = CopySign(one, x, precision=self.precision, tag="sign_x")

            n_invqpi = self.precision.round_sollya_object(4/sollya.pi, sollya.RN)
            invqpi = Constant(n_invqpi, tag="invqpi")

            unround_k = Multiplication(abs_x, invqpi, tag="unround_k")

            k = Floor(unround_k, precision=self.precision, tag="k")

            qpi = Constant(n_qpi, tag="qpi")

            whole = Multiplication(k, qpi, tag="whole")

            r = Subtraction(abs_x, whole, tag="r")

            ik = Conversion(k, precision=self.precision.get_integer_format(), tag="ik")

            part = Modulo(ik, 4, precision=self.precision.get_integer_format(), tag="part")

            eq_1 = Equal(part, 1)
            eq_2 = Equal(part, 2)
            eq_3 = Equal(part, 3)
            r_1 = Select(eq_1, qpi-r, r)
            r_2 = Select(eq_2, -r,    r_1)
            r_3 = Select(eq_3, r-qpi, r_2)

        else:
            r_3 = x

        approx_interval = sollya.Interval(-2**-10, n_qpi+2**-10)
        approx_func = sollya.tan(sollya.x)
        builder = Polynomial.build_from_approximation
        sollya.settings.prec = 2**10
        poly_object = builder(approx_func,
                              range(1, self.poly_degree+1, 2),
                              [self.precision]*(self.poly_degree+1),
                              approx_interval,
                              sollya.relative)
        self.poly_object = poly_object
        schemer = PolynomialSchemeEvaluator.generate_horner_scheme
        poly = schemer(poly_object, r_3)

        if not self.skip_reduction:
            post_bool = LogicalOr(eq_1, eq_2)

            inv_poly = Select(post_bool, 1/poly, poly)

            retval = Multiplication(inv_poly, sign_x, tag="retval")

        else:
            retval = poly

        scheme = Return(retval, precision=self.precision)

        return scheme


    def determine_error(self):
        sollya.settings.display = sollya.hexadecimal
        n_qpi = self.precision.round_sollya_object(sollya.pi/4, sollya.RN)
        n_invqpi = self.precision.round_sollya_object(4/sollya.pi, sollya.RN)

        poly_expr = str(sollya.horner(self.poly_object.get_sollya_object()))
        poly_expr = poly_expr.replace("_x_", "r_3")
        poly_expr = poly_expr.replace("r_3^0x1p1", "r_3*r_3")

        config = fptaylor.CHECK_CONFIG.copy()
        del config["--abs-error"]
        config["--opt"] = "bb-eval"
        config["--rel-error-threshold"] = "0.0"
        config["--intermediate-opt"] = "false"
        config["--uncertainty"] = "false"

        def generate_fptaylor(x):
            x_low = sollya.inf(x)
            x_high = sollya.sup(x)
            query = "\n".join(
                ["Variables",
                 "  real x in [{},{}];".format(x_low, x_high),
                 "Definitions",
                 "  r_3 rnd64= x;",
                 "  retval rnd64= {};".format(poly_expr),
                 "Expressions",
                 "  retval;"])

            rnd_rel_err = None
            rnd_abs_err = None
            try:
                res = fptaylor.Result(query, {**config,
                                              "--rel-error": "true",
                                              "--abs-error": "true"})
                rnd_rel_err = float(res.result["relative_errors"]["final_total"]["value"])
                rnd_abs_err = float(res.result["absolute_errors"]["final_total"]["value"])
            except AssertionError:
                pass
            except KeyError:
                try:
                    rnd_abs_err = float(res.result["absolute_errors"]["final_total"]["value"])
                except KeyError:
                    pass

            if rnd_abs_err is None:
                try:
                    res = fptaylor.Result(query, {**config,
                                                  "--rel-error": "false",
                                                  "--abs-error": "true"})
                    rnd_abs_err = float(res.result["absolute_errors"]["final_total"]["value"])
                except AssertionError:
                    pass
                except KeyError:
                    pass

            err_int = sollya.supnorm(self.poly_object.get_sollya_object(),
                                     sollya.tan(sollya.x),
                                     x,
                                     sollya.relative,
                                     2**-100)
            algo_rel_err = sollya.sup(err_int)

            err_int = sollya.supnorm(self.poly_object.get_sollya_object(),
                                     sollya.tan(sollya.x),
                                     x,
                                     sollya.absolute,
                                     2**-100)
            algo_abs_err = sollya.sup(err_int)

            if rnd_rel_err is None or str(algo_rel_err) == "error":
                rel_err = float("inf")
            else:
                rel_err = rnd_rel_err + algo_rel_err

            if rnd_abs_err is None or str(algo_abs_err) == "error":
                abs_err = float("inf")
            else:
                abs_err = rnd_abs_err + algo_abs_err

            return rel_err, abs_err

        def generate_reduction_fptaylor(x):
            # get sign and abs_x, must be the same at endpoints
            if sollya.sup(x) <= 0:
                sign_x_expr = "-1.0"
                abs_x_expr = "-x"
                abs_x = -x
            elif sollya.inf(x) >= 0:
                sign_x_expr = "1.0"
                abs_x_expr = "x"
                abs_x = x
            else:
                assert False, "Interval must not straddle 0"

            # get k, must be the same at endpoints
            unround_k = abs_x * n_invqpi
            k_low = sollya.floor(sollya.inf(unround_k))
            k_high = sollya.floor(sollya.sup(unround_k))
            if k_low != k_high:
                assert False, "Interval must not straddle multples of pi/4"
            k = int(k_low)
            part = k%4

            r_expr = "abs_x - whole"
            r = abs_x - k*n_qpi

            if part == 0:
                r_3_expr = "r"
                r_3 = r
            elif part == 1:
                r_3_expr = "{} - r".format(n_qpi)
                r_3 = r
            elif part == 2:
                r_3_expr = "-r"
                r_3 = r
            else:
                r_3_expr = "r - {}".format(n_qpi)
                r_3 = r

            if part == 1 or part == 2:
                inv_poly_expr = "1/poly"
            else:
                inv_poly_expr = "poly"

            x_low = sollya.inf(x)
            x_high = sollya.sup(x)
            query = "\n".join(
                ["Variables",
                 "  real x in [{},{}];".format(x_low, x_high),
                 "Definitions",
                 "  abs_x rnd64= {};".format(abs_x_expr),
                 "  whole rnd64= {} * {};".format(k, n_qpi),
                 "  r rnd64= abs_x - whole;",
                 "  r_3 rnd64= {};".format(r_3_expr),
                 "  poly rnd64= {};".format(poly_expr),
                 "  inv_poly rnd64= {};".format(inv_poly_expr),
                 "  retval rnd64= inv_poly*{};".format(sign_x_expr),
                 "Expressions",
                 "  retval;"])

            rnd_rel_err = None
            rnd_abs_err = None
            try:
                res = fptaylor.Result(query, {**config,
                                              "--rel-error": "true",
                                              "--abs-error": "true"})
                rnd_rel_err = float(res.result["relative_errors"]["final_total"]["value"])
                rnd_abs_err = float(res.result["absolute_errors"]["final_total"]["value"])
            except AssertionError:
                pass
            except KeyError:
                try:
                    rnd_abs_err = float(res.result["absolute_errors"]["final_total"]["value"])
                except KeyError:
                    pass

            if rnd_abs_err is None:
                try:
                    res = fptaylor.Result(query, {**config,
                                                  "--rel-error": "false",
                                                  "--abs-error": "true"})
                    rnd_abs_err = float(res.result["absolute_errors"]["final_total"]["value"])
                except AssertionError:
                    pass
                except KeyError:
                    pass

            err_int = sollya.supnorm(self.poly_object.get_sollya_object(),
                                     sollya.tan(sollya.x),
                                     r_3,
                                     sollya.relative,
                                     2**-100)
            algo_rel_err = sollya.sup(err_int)

            err_int = sollya.supnorm(self.poly_object.get_sollya_object(),
                                     sollya.tan(sollya.x),
                                     r_3,
                                     sollya.absolute,
                                     2**-100)
            algo_abs_err = sollya.sup(err_int)

            if rnd_rel_err is None or str(algo_rel_err) == "error":
                rel_err = float("inf")
            else:
                rel_err = rnd_rel_err + algo_rel_err

            if rnd_abs_err is None or str(algo_abs_err) == "error":
                abs_err = float("inf")
            else:
                abs_err = rnd_abs_err + algo_abs_err

            return rel_err, abs_err


        def split_domain(starting_domain, slivers):
            in_domains = [starting_domain]

            # abs
            out_domains = list()
            for I in in_domains:
                if sollya.inf(I) < 0 and sollya.sup(I) > 0:
                    out_domains.append(sollya.Interval(sollya.inf(I), 0))
                    out_domains.append(sollya.Interval(0, sollya.sup(I)))
                else:
                    out_domains.append(I)
            in_domains = out_domains

            # k
            out_domains = list()
            while len(in_domains) > 0:
                I = in_domains.pop()
                #print("in: [{}, {}]".format(float(sollya.inf(I)), float(sollya.sup(I))))
                unround_mult = I * n_invqpi
                mult_low = sollya.floor(sollya.inf(unround_mult))
                mult_high = sollya.floor(sollya.sup(unround_mult))
                if mult_low == mult_high or (mult_low == -1 and mult_high == 0):
                    #print("  accepted")
                    out_domains.append(I)
                    continue
                if sollya.sup(I) <= 0:
                    divider_low = (mult_low+1)*n_qpi
                    divider_high = divider_low - divider_low*2**-53
                else:
                    divider_high = (mult_low+1)*n_qpi
                    divider_low = divider_high - divider_high*2**-53

                lower_part = sollya.Interval(sollya.inf(I), divider_low)
                upper_part = sollya.Interval(divider_high, sollya.sup(I))
                #print("  -> [{}, {}]".format(float(sollya.inf(lower_part)), float(sollya.sup(lower_part))))
                #print("  -> [{}, {}]".format(float(sollya.inf(upper_part)), float(sollya.sup(upper_part))))
                in_domains.append(lower_part)
                in_domains.append(upper_part)
            in_domains = out_domains

            # subdivide each section into 2**subd sections
            for _ in range(slivers):
                out_domains = list()
                for I in in_domains:
                    mid = sollya.mid(I)
                    out_domains.append(sollya.Interval(sollya.inf(I), mid))
                    out_domains.append(sollya.Interval(mid, sollya.sup(I)))
                in_domains = out_domains

            in_domains = set(in_domains)
            in_domains = sorted(in_domains, key=lambda x:float(sollya.inf(x)))
            in_domains = [d for d in in_domains if sollya.inf(d) != sollya.sup(d)]
            return in_domains

        if self.skip_reduction:
            starting_domain = sollya.Interval(0, n_qpi)
            slivers = 7
        else:
            reduction_k = 40
            starting_domain = sollya.Interval(-reduction_k*n_qpi, reduction_k*n_qpi)
            slivers = 7

        # analyse each piece
        in_domains = split_domain(starting_domain, slivers)
        errors = list()
        for I in in_domains:
            if self.skip_reduction:
                rel_err, abs_err = generate_fptaylor(I)
            else:
                rel_err, abs_err = generate_reduction_fptaylor(I)
            print("{}\t{}\t{}\t{}".format(float(sollya.inf(I)),
                                       float(sollya.sup(I)),
                                       float(abs_err),
                                       float(rel_err)))
            errors.append((I, abs_err, rel_err))

        def generate_json(errors, domain):
            errors = [err for err in errors if err[0] in domain]
            errors.sort(key=lambda err: err[2])
            epsilon = errors[0][2]
            delta = max(err[1] for err in errors if err[1]!=float("inf"))

            d = {
                "cname": self.function_name,
                "delta": float(delta),
                "domain": [float(sollya.inf(domain)),
                           float(sollya.sup(domain)),],
                "epsilon": float(epsilon),
                "operation": "tan"
            }
            return d

        if self.skip_reduction:
            d = generate_json(errors, sollya.Interval(0, n_qpi))
            json_str = json.dumps(d, sort_keys=True, indent=4)
            json_str = "spec: " + json_str.replace("\n", "\nspec: ")
            print(json_str)

        else:
            specs = list()
            for k in range(1, reduction_k):
                d = generate_json(errors, sollya.Interval(-k*n_qpi, k*n_qpi))
                specs.append(d)
            for i in range(len(specs)):
                d = specs[i]
                if i == len(specs)-1:
                    json_str = json.dumps(d, sort_keys=True, indent=4)
                    json_str = "spec: " + json_str.replace("\n", "\nspec: ")
                    print(json_str)
                    break
                nd = specs[i+1]
                if d["epsilon"] == nd["epsilon"] and d["delta"] == nd["delta"]:
                    continue
                json_str = json.dumps(d, sort_keys=True, indent=4)
                json_str = "spec: " + json_str.replace("\n", "\nspec: ")
                print(json_str)




if __name__ == "__main__":
    arg_template = ML_NewArgTemplate(default_arg=ML2_Tangential.get_default_args())
    arg_template.parser.add_argument("--poly-degree", type=int, default=1)
    arg_template.parser.add_argument("--skip-reduction", default=False,
                                     action="store_const", const=True)
    arg_template.parser.add_argument("--skip-analysis", default=False,
                                     action="store_const", const=True)
    args = arg_template.arg_extraction()
    meta_function = ML2_Tangential(args)
    meta_function.gen_implementation()
    if not args.skip_analysis:
        meta_function.determine_error()
