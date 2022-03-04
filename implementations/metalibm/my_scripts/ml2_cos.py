#!/usr/bin/env python3


import sollya

from metalibm_core.core.simple_scalar_function import ScalarUnaryFunction
from metalibm_core.core.ml_function import DefaultArgTemplate
from metalibm_core.utility.ml_template import ML_NewArgTemplate
from metalibm_core.core.polynomials import PolynomialSchemeEvaluator, Polynomial
from metalibm_core.core.ml_formats import ML_Binary64, ML_Binary32

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




class ML2_Cosinusoidal(ScalarUnaryFunction):

    def __init__(self, args=DefaultArgTemplate):
        super().__init__(args)
        self.poly_degree = args.poly_degree
        self.skip_reduction = args.skip_reduction
        self.slivers = args.slivers

    @staticmethod
    def get_default_args(**kw):
        default_args_cos = {
            "output_file": "ml2_cos.c",
            "function_name": "ml2_cos",
            "precision": ML_Binary64,
            "poly_degree": 1,
            "skip_reduction": False,
        }
        default_args_cos.update(kw)
        return DefaultArgTemplate(**default_args_cos)

    def generate_scheme(self):
        x = self.implementation.add_input_variable("x", self.precision)

        n_hpi = self.precision.round_sollya_object(sollya.pi/2, sollya.RN)

        if not self.skip_reduction:
            abs_x = Abs(x, tag="abs_x")

            n_invhpi = self.precision.round_sollya_object(2/sollya.pi, sollya.RN)
            invhpi = Constant(n_invhpi, tag="invhpi")

            unround_k = Multiplication(abs_x, invhpi, tag="unround_k")

            k = Floor(unround_k, precision=self.precision, tag="k")

            hpi = Constant(n_hpi, tag="hpi")

            whole = Multiplication(k, hpi, tag="whole")

            r = Subtraction(abs_x, whole, tag="r")

            ik = Conversion(k, precision=ML_Binary32.get_integer_format(), tag="ik")

            part = Modulo(ik, 4, precision=ML_Binary32.get_integer_format(), tag="part")

            pre_part = Modulo(part, 2, precision=ML_Binary32.get_integer_format(), tag="pre_part")

            flip = Subtraction(hpi, r, tag="flip")

            do_flip = Equal(pre_part, 0, tag="do_flip")

            z = Select(do_flip, r, flip)

        else:
            z = x

        approx_interval = sollya.Interval(-2**-10, n_hpi + 2**-10)
        approx_func = sollya.cos(sollya.x)
        builder = Polynomial.build_from_approximation
        sollya.settings.prec = 2**10
        poly_object = builder(approx_func,
                              range(0, self.poly_degree+1, 2),
                              [self.precision]*(self.poly_degree+1),
                              approx_interval,
                              sollya.relative)
        self.poly_object = poly_object
        schemer = PolynomialSchemeEvaluator.generate_horner_scheme
        poly = schemer(poly_object, z)
        self.poly = poly

        if not self.skip_reduction:
            post_bool = LogicalOr(Equal(part, 1, tag="part_eq_1"), Equal(part, 2, tag="part_eq_2"))

            flipped_poly = Select(post_bool, -poly, poly)

            retval = flipped_poly

        else:
            retval = poly

        scheme = Return(retval, precision=self.precision)

        return scheme


    def determine_error(self):
        sollya.settings.display = sollya.hexadecimal
        n_hpi = self.precision.round_sollya_object(sollya.pi/2, sollya.RN)
        n_invhpi = self.precision.round_sollya_object(2/sollya.pi, sollya.RN)

        poly_expr = str(sollya.horner(self.poly_object.get_sollya_object()))
        poly_expr = poly_expr.replace("_x_", "z")
        poly_expr = poly_expr.replace("z^0x1p1", "z*z")

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
                 "  real z in [{},{}];".format(x_low, x_high),
                 "Definitions",
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

            err_int = sollya.supnorm(self.poly_object.get_sollya_object(),
                                     sollya.cos(sollya.x),
                                     x,
                                     sollya.relative,
                                     2**-100)
            algo_rel_err = sollya.sup(err_int)

            err_int = sollya.supnorm(self.poly_object.get_sollya_object(),
                                     sollya.cos(sollya.x),
                                     x,
                                     sollya.absolute,
                                     2**-100)
            algo_abs_err = sollya.sup(err_int)

            if rnd_rel_err is None or str(algo_rel_err) == "error":
                rel_err = float("inf")
            else:
                rel_err = rnd_rel_err + algo_rel_err

            abs_err = rnd_abs_err + algo_abs_err

            return rel_err, abs_err

        def generate_reduction_fptaylor(x):
            # get sign and abs_x, must be the same at endpoints
            if sollya.sup(x) <= 0:
                abs_x_expr = "-x"
                abs_x = -x
            elif sollya.inf(x) >= 0:
                abs_x_expr = "x"
                abs_x = x
            else:
                assert False, "Interval must not straddle 0"

            # get k, must be the same at endpoints
            unround_k = abs_x * n_invhpi
            k_low = sollya.floor(sollya.inf(unround_k))
            k_high = sollya.floor(sollya.sup(unround_k))
            if k_low != k_high:
                assert False, "Interval must not straddle multples of pi/2"
            k = int(k_low)
            part = k%4
            pre_part = part%2

            r_expr = "abs_x - whole"
            r = abs_x - k*n_hpi

            if pre_part == 0:
                z_expr = "r"
                z = r
            else:
                z_expr = "{} - r".format(n_hpi)
                z = n_hpi - r

            if part >= 1:
                flipped_poly_expr = "-poly"
            else:
                flipped_poly_expr = "poly"

            x_low = sollya.inf(x)
            x_high = sollya.sup(x)
            query = "\n".join(
                ["Variables",
                 "  real x in [{},{}];".format(x_low, x_high),
                 "Definitions",
                 "  abs_x rnd64= {};".format(abs_x_expr),
                 "  whole rnd64= {} * {};".format(k, n_hpi),
                 "  r rnd64= abs_x - whole;",
                 "  z rnd64= {};".format(z_expr),
                 "  poly rnd64= {};".format(poly_expr),
                 "  flipped_poly rnd64= {};".format(flipped_poly_expr),
                 "  retval rnd64= flipped_poly;",
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

            err_int = sollya.supnorm(self.poly_object.get_sollya_object(),
                                     sollya.cos(sollya.x),
                                     z,
                                     sollya.relative,
                                     2**-100)
            algo_rel_err = sollya.sup(err_int)

            err_int = sollya.supnorm(self.poly_object.get_sollya_object(),
                                     sollya.cos(sollya.x),
                                     z,
                                     sollya.absolute,
                                     2**-100)
            algo_abs_err = sollya.sup(err_int)

            if rnd_rel_err is None or str(algo_rel_err) == "error":
                rel_err = float("inf")
            else:
                rel_err = rnd_rel_err + algo_rel_err

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
                unround_mult = I * n_invhpi
                mult_low = sollya.floor(sollya.inf(unround_mult))
                mult_high = sollya.floor(sollya.sup(unround_mult))
                if mult_low == mult_high or (mult_low == -1 and mult_high == 0):
                    #print("  accepted")
                    out_domains.append(I)
                    continue
                if sollya.sup(I) <= 0:
                    divider_low = (mult_low+1)*n_hpi
                    divider_high = divider_low - divider_low*2**-53
                else:
                    divider_high = (mult_low+1)*n_hpi
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
            starting_domain = sollya.Interval(-n_hpi, n_hpi)
        else:
            reduction_k = 40
            starting_domain = sollya.Interval(-reduction_k*n_hpi, reduction_k*n_hpi)

        # analyse each piece
        in_domains = split_domain(starting_domain, self.slivers)
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
            delta = max(err[1] for err in errors)

            d = {
                "cname": self.function_name,
                "delta": float(delta),
                "domain": [float(sollya.inf(domain)),
                           float(sollya.sup(domain)),],
                "epsilon": float(epsilon),
                "operation": "cos"
            }
            return d

        if self.skip_reduction:
            d = generate_json(errors, sollya.Interval(-n_hpi-2**-10, n_hpi+2**-10))
            json_str = json.dumps(d, sort_keys=True, indent=4)
            json_str = "spec: " + json_str.replace("\n", "\nspec: ")
            print(json_str)

        else:
            specs = list()
            for k in range(1, reduction_k):
                d = generate_json(errors, sollya.Interval(-k*n_hpi-2**-10, k*n_hpi+2**-10))
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
    arg_template = ML_NewArgTemplate(default_arg=ML2_Cosinusoidal.get_default_args())
    arg_template.parser.add_argument("--slivers", type=int, default=4)
    arg_template.parser.add_argument("--poly-degree", type=int, default=2)
    arg_template.parser.add_argument("--skip-reduction", default=False,
                                     action="store_const", const=True)
    arg_template.parser.add_argument("--skip-analysis", default=False,
                                     action="store_const", const=True)
    args = arg_template.arg_extraction()
    meta_function = ML2_Cosinusoidal(args)
    meta_function.gen_implementation()
    if not args.skip_analysis:
        meta_function.determine_error()
