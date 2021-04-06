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




class ML2_Exponential(ScalarUnaryFunction):

    def __init__(self, args=DefaultArgTemplate):
        super().__init__(args)
        self.poly_degree = args.poly_degree
        self.skip_reduction = args.skip_reduction
        self.slivers = args.slivers

    @staticmethod
    def get_default_args(**kw):
        default_args_exp = {
            "output_file": "ml2_exp.c",
            "function_name": "ml2_exp",
            "precision": ML_Binary64,
            "poly_degree": 1,
            "skip_reduction": False,
        }
        default_args_exp.update(kw)
        return DefaultArgTemplate(**default_args_exp)

    def generate_scheme(self):
        x = self.implementation.add_input_variable("x", self.precision)

        n_log2 = self.precision.round_sollya_object(sollya.log(2), sollya.RN)

        if not self.skip_reduction:
            n_invlog2 = self.precision.round_sollya_object(1/sollya.log(2), sollya.RN)
            invlog2 = Constant(n_invlog2, tag="invlog2")

            unround_k = Multiplication(x, invlog2, tag="unround_k")

            k = Floor(unround_k, precision=self.precision, tag="k")

            log2 = Constant(n_log2, tag="log2")

            whole = Multiplication(k, log2, tag="whole")

            r = Subtraction(x, whole, tag="r")

        else:
            r = x

        approx_interval = sollya.Interval(-2**-10, n_log2+2**-10)
        approx_func = sollya.exp(sollya.x)
        builder = Polynomial.build_from_approximation
        sollya.settings.prec = 2**10
        poly_object = builder(approx_func,
                              self.poly_degree,
                              [self.precision]*(self.poly_degree+1),
                              approx_interval,
                              sollya.relative)
        self.poly_object = poly_object
        schemer = PolynomialSchemeEvaluator.generate_horner_scheme
        poly = schemer(poly_object, r)

        if not self.skip_reduction:
            ik = Conversion(k, precision=self.precision.get_integer_format(), tag="ik")

            twok = ExponentInsertion(ik, precision=self.precision, tag="twok")

            retval = Multiplication(poly, twok, tag="retval")

        else:
            retval = poly

        scheme = Return(retval)

        return scheme


    def determine_error(self):
        sollya.settings.display = sollya.hexadecimal
        n_log2 = self.precision.round_sollya_object(sollya.log(2), sollya.RN)
        n_invlog2 = self.precision.round_sollya_object(1/sollya.log(2), sollya.RN)

        poly_expr = str(sollya.horner(self.poly_object.get_sollya_object()))
        poly_expr = poly_expr.replace("_x_", "r")
        poly_expr = poly_expr.replace("r^0x1p1", "r*r")

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
                 "  r rnd64= x;",
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
                                     sollya.exp(sollya.x),
                                     x,
                                     sollya.relative,
                                     2**-100)
            algo_rel_err = sollya.sup(err_int)

            err_int = sollya.supnorm(self.poly_object.get_sollya_object(),
                                     sollya.exp(sollya.x),
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

            # get k, must be the same at endpoints
            unround_k = x * n_invlog2
            k_low = sollya.floor(sollya.inf(unround_k))
            k_high = sollya.floor(sollya.sup(unround_k))
            if not (k_low == k_high or (k_low == -1 and sollya.sup(x) == 0)):
                assert False, "Interval must not straddle multples of log(2)"
            k = int(k_low)
            r = x - k*n_log2

            twok = 2**k

            x_low = sollya.inf(x)
            x_high = sollya.sup(x)
            query = "\n".join(
                ["Variables",
                 "  real x in [{},{}];".format(x_low, x_high),
                 "Definitions",
                 "  whole rnd64= {} * {};".format(k, n_log2),
                 "  r rnd64= x - whole;",
                 "  poly rnd64= {};".format(poly_expr),
                 "  retval rnd64= poly*{};".format(twok),
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
                                     sollya.exp(sollya.x),
                                     r,
                                     sollya.relative,
                                     2**-100)
            algo_rel_err = sollya.sup(err_int)

            err_int = sollya.supnorm(self.poly_object.get_sollya_object(),
                                     sollya.exp(sollya.x),
                                     r,
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
                unround_mult = I * n_invlog2
                mult_low = sollya.floor(sollya.inf(unround_mult))
                mult_high = sollya.floor(sollya.sup(unround_mult))
                #print("in: [{}, {}] ({}, {})".format(float(sollya.inf(I)), float(sollya.sup(I)), int(mult_low), int(mult_high)))
                if mult_low == mult_high or (mult_low == -1 and mult_high == 0):
                    #print("  accepted")
                    out_domains.append(I)
                    continue

                k_range = sollya.Interval(mult_low, mult_low+1.5)
                I_range = k_range * n_log2
                for _ in range(100):
                    mid = sollya.mid(I_range)
                    k = sollya.floor(mid*n_invlog2)
                    if k == mult_low:
                        I_range = sollya.Interval(mid, sollya.sup(I_range))
                    else:
                        I_range = sollya.Interval(sollya.inf(I_range), mid)

                divider_high = sollya.sup(I_range)
                divider_low = sollya.inf(I_range)

                lower_part = sollya.Interval(sollya.inf(I), divider_low)
                upper_part = sollya.Interval(divider_high, sollya.sup(I))
                #print("  -> [{}, {}]".format(float(sollya.inf(lower_part)), float(sollya.sup(lower_part))))
                #print("  -> [{}, {}]".format(float(sollya.inf(upper_part)), float(sollya.sup(upper_part))))
                in_domains.append(upper_part)
                in_domains.append(lower_part)
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
            starting_domain = sollya.Interval(0, n_log2)
        else:
            reduction_k = 40
            starting_domain = sollya.Interval(-reduction_k*n_log2, reduction_k*n_log2)

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
                "operation": "exp"
            }
            return d

        if self.skip_reduction:
            d = generate_json(errors, sollya.Interval(0, n_log2))
            json_str = json.dumps(d, sort_keys=True, indent=4)
            json_str = "spec: " + json_str.replace("\n", "\nspec: ")
            print(json_str)

        else:
            specs = list()
            for k in range(1, reduction_k):
                d = generate_json(errors, sollya.Interval(-k*n_log2, k*n_log2))
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
    arg_template = ML_NewArgTemplate(default_arg=ML2_Exponential.get_default_args())
    arg_template.parser.add_argument("--slivers", type=int, default=4)
    arg_template.parser.add_argument("--poly-degree", type=int, default=1)
    arg_template.parser.add_argument("--skip-reduction", default=False,
                                     action="store_const", const=True)
    arg_template.parser.add_argument("--skip-analysis", default=False,
                                     action="store_const", const=True)
    args = arg_template.arg_extraction()
    meta_function = ML2_Exponential(args)
    meta_function.gen_implementation()
    if not args.skip_analysis:
        meta_function.determine_error()
