

from utils import Logger, Timer

import fpcore.ast as fpcore_ast
import fptaylor.lexer as fptaylor_lexer

from sly import Parser

import sys


logger = Logger(level=Logger.EXTRA, color=Logger.magenta)
timer = Timer()




class Round(fpcore_ast.Expr):
    def __init__(self, quint, body):
        super().__init__()
        self.body = body
        self.bits = int(quint[0])
        self.type = quint[1]
        self.scale = float(quint[2])
        self.eps = int(quint[3])
        self.delta = int(quint[4])

    def __str__(self):
        format_str = super().__str__()
        this_str = "(round {} {} {} {} {} {})".format(
            self.bits, self.type, self.scale, self.eps, self.delta,
            self.body)
        return format_str.format(this_str)

    def __repr__(self):
        format_repr = super().__repr__()
        this_repr = "[{}, {}, {}, {}, {}], {}".format(
            self.bits, self.type, self.scale, self.eps, self.delta,
            repr(self.body))
        return format_repr.format(this_repr)


class FPTaylorParseError(Exception):
    def __init__(self, p):
        self.p = p

class FPTaylorParser(Parser):
    tokens = fptaylor_lexer.FPTaylorLexer.tokens

    precedence = (("left", "PLUS", "MINUS"),
                  ("left", "TIMES", "DIVIDE"),
                  ("right", "UMINUS"),)

    # expression
    @_("expression PLUS expression",
       "expression MINUS expression",
       "expression TIMES expression",
       "expression DIVIDE expression")
    def expression(self, p):
        return fpcore_ast.Operation(p[1], p.expression0, p.expression1)

    @_("MINUS expression %prec UMINUS")
    def expression(self, p):
        if type(p.expression) == fpcore_ast.Number:
            if p.expression.source[0] == "-":
                return fpcore_ast.Number(p.expression.source[1:])
            return fpcore_ast.Number("-" + p.expression.source)
        return fpcore_ast.Operation(p[0], p.expression)

    @_("base")
    def expression(self, p):
        return p.base

    # base
    @_("symbol",
       "number",
       "group",
       "operation",
       "round")
    def base(self, p):
        return p[0]

    # symbol
    @_("SYMBOL")
    def symbol(self, p):
        return fpcore_ast.Variable(p[0])

    # number
    @_("RATIONAL",
       "DECNUM")
    def number(self, p):
        return fpcore_ast.Number(p[0])

    # group
    @_("LP expression RP")
    def group(self, p):
        return p.expression

    # operation
    @_("OPERATION LP expression RP")
    def operation(self, p):
        return fpcore_ast.Operation(p[0], p.expression)

    @_("OPERATION LP expression C expression RP")
    def operation(self, p):
        return fpcore_ast.Operation(p[0], p.expression0, p.expression1)

    # round
    @_("ROUND LP expression RP")
    def round(self, p):
        quint = fptaylor_lexer.FPTaylorLexer.PREDEFINED_ROUNDS[p[0]]
        return Round(quint, p.expression)

    @_("ROUND LB DECNUM C SYMBOL C DECNUM C DECNUM C DECNUM RB LP expression RP")
    def round(self, p):
        return Round((p[2], p[4], p[6], p[8], p[10]), p.expression)

    # todo: rnd[bits, type, scale] is not covered

    # errors
    def error(self, p):
        if p:
            logger.error("Line {}: Syntax error at {}", p.lineno, p)
        else:
            logger.error("Unexpected end of FPTaylor expression")
        raise FPTaylorParseError(p)


_parser = FPTaylorParser()
def parse(text):
    lexed = fptaylor_lexer.lex(text)
    timer.start()
    parsed = _parser.parse(lexed)
    timer.stop()
    return parsed




def main(argv):
    logger.set_log_level(Logger.EXTRA)

    if len(argv) == 1:
        text = sys.stdin.read()
    elif len(argv) == 2:
        with open(argv[1], "r") as f:
            text = f.read()
    if text.strip() == "":
        text = "(exp(x) - 1) / x"

    logger.blog("Input text", text)

    logger.blog("Parsed", repr(parse(text)))

    logger(" Lexing time: {:.6f} msec", fptaylor_lexer.timer.elapsed())
    logger("Parsing time: {:.6f} msec", timer.elapsed())


if __name__ == "__main__":
    retcode = 0
    try:
        retcode = main(sys.argv)
    except KeyboardInterrupt:
        print("Goodbye")

    sys.exit(retcode)
