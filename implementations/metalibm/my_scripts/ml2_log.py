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




class ML2_Logarithm(ScalarUnaryFunction):

    def __init__(self, args=DefaultArgTemplate):
        super().__init__(args)
        self.poly_degree = args.poly_degree
        self.skip_reduction = args.skip_reduction

    @staticmethod
    def get_default_args(**kw):
        default_args_log = {
            "output_file": "ml2_log.c",
            "function_name": "ml2_log",
            "precision": ML_Binary64,
            "poly_degree": 1,
            "skip_reduction": False,
        }
        default_args_log.update(kw)
        return DefaultArgTemplate(**default_args_log)

    def generate_scheme(self):
        x = self.implementation.add_input_variable("x", self.precision)

        if not self.skip_reduction:
            x_exp_int = ExponentExtraction(x, tag="x_exp_int")
            x_exp = Conversion(x_exp_int, precision=self.precision, tag="x_exp")

            x_man = MantissaExtraction(x, tag="x_man")

            r = Multiplication(x_man, 0.5, tag="r")

        else:
            r = x

        approx_interval = sollya.Interval(0.5-2**-10, 1+2**-10)
        approx_func = sollya.log(sollya.x)
        builder = Polynomial.build_from_approximation
        sollya.settings.prec = 2**10
        poly_object = builder(approx_func,
                              self.poly_degree,
                              [self.precision]*(self.poly_degree+1),
                              approx_interval,
                              sollya.relative)
        self.poly_object = poly_object
        schemer = PolynomialSchemeEvaluator.generate_horner_scheme
        poly = schemer(poly_object, r, unified_precision=self.precision)

        if not self.skip_reduction:
            n_log2 = self.precision.round_sollya_object(sollya.log(2), sollya.RN)
            log2 = Constant(n_log2, tag="log2")

            x_mul = Addition(x_exp, 1, tag="x_mul")

            offset = Multiplication(x_mul, log2, tag="offset")

            retval = Addition(offset, poly, tag="retval")

        else:
            retval = poly

        scheme = Return(retval)

        return scheme

    def determine_error(self):
        sollya.settings.display = sollya.hexadecimal
        n_log2 = self.precision.round_sollya_object(sollya.log(2), sollya.RN)

        poly_expr = str(sollya.horner(self.poly_object.get_sollya_object()))
        poly_expr = poly_expr.replace("_x_", "z")
        poly_expr = poly_expr.replace("z^0x1p1", "z*z")

        config = fptaylor.CHECK_CONFIG.copy()
        del config["--abs-error"]
        config["--opt"] = "bb-eval"
        config["--rel-error-threshold"] = "0.0"
        config["--intermediate-opt"] = "false"
        config["--uncertainty"] = "false"
        config["--opt-timeout"] = 100000 # log is returning inf

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
                                     sollya.log(sollya.x),
                                     x,
                                     sollya.relative,
                                     2**-100)
            algo_rel_err = sollya.sup(err_int)

            err_int = sollya.supnorm(self.poly_object.get_sollya_object(),
                                     sollya.log(sollya.x),
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
            unround_e = sollya.log2(I)
            e_low = sollya.floor(sollya.inf(unround_e))
            e_high = sollya.floor(sollya.sup(unround_e))
            if e_low != e_high:
                assert False, "Interval must not stradle a binade"
            e = int(e_low) + 1
            z = x / (2**e) * 0.5
            query = "\n".join(
                ["Variables",
                 "  real z in [{},{}];".format(sollya.inf(z), sollya.sup(z)),
                 "Definitions",
                 "  poly rnd64= {};".format(poly_expr),
                 "  retval rnd64= {}*{} + poly;".format(e, n_log2),
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
                                     sollya.log(sollya.x),
                                     z,
                                     sollya.relative,
                                     2**-100)
            algo_rel_err = sollya.sup(err_int)

            err_int = sollya.supnorm(self.poly_object.get_sollya_object(),
                                     sollya.log(sollya.x),
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

            out_domains = list()
            while len(in_domains) > 0:
                I = in_domains.pop()
                unround_e = sollya.log2(I)
                e_low = sollya.floor(sollya.inf(unround_e))
                e_high = sollya.floor(sollya.sup(unround_e))
                #print("in: [{}, {}] ({}, {})".format(float(sollya.inf(I)), float(sollya.sup(I)), int(e_low), int(e_high)))
                if e_low == e_high:
                    #print("  accepted")
                    out_domains.append(I)
                    continue
                e_range = sollya.Interval(e_low, e_low+1)
                I_range = 2**e_range
                for _ in range(100):
                    mid = sollya.mid(I_range)
                    e = sollya.floor(sollya.log2(mid))
                    if e == e_low:
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
            starting_domain = sollya.Interval(0.5, 1.0)
            slivers = 8
        else:
            reduction_e = 12
            starting_domain = sollya.Interval(2**(-reduction_e), 2**reduction_e)
            slivers = 8

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
            delta = max(err[1] for err in errors)

            d = {
                "cname": self.function_name,
                "delta": float(delta),
                "domain": [float(sollya.inf(domain)),
                           float(sollya.sup(domain)),],
                "epsilon": float(epsilon),
                "operation": "log"
            }
            return d

        if self.skip_reduction:
            d = generate_json(errors, sollya.Interval(0.5, 1.0))
            json_str = json.dumps(d, sort_keys=True, indent=4)
            json_str = "spec: " + json_str.replace("\n", "\nspec: ")
            print(json_str)

        else:
            specs = list()
            for e in range(1, reduction_e):
                d = generate_json(errors, sollya.Interval(2**(-e), 2**e))
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
    arg_template = ML_NewArgTemplate(default_arg=ML2_Logarithm.get_default_args())
    arg_template.parser.add_argument("--poly-degree", type=int, default=1)
    arg_template.parser.add_argument("--skip-reduction", default=False,
                                     action="store_const", const=True)
    arg_template.parser.add_argument("--skip-analysis", default=False,
                                     action="store_const", const=True)
    args = arg_template.arg_extraction()
    meta_function = ML2_Logarithm(args)
    meta_function.gen_implementation()
    if not args.skip_analysis:
        meta_function.determine_error()
