# Generated from HoneyCalc.g4 by ANTLR 4.13.2
from antlr4 import *
if "." in __name__:
    from .HoneyCalcParser import HoneyCalcParser
else:
    from HoneyCalcParser import HoneyCalcParser

# This class defines a complete listener for a parse tree produced by HoneyCalcParser.
class HoneyCalcListener(ParseTreeListener):

    # Enter a parse tree produced by HoneyCalcParser#expr.
    def enterExpr(self, ctx:HoneyCalcParser.ExprContext):
        pass

    # Exit a parse tree produced by HoneyCalcParser#expr.
    def exitExpr(self, ctx:HoneyCalcParser.ExprContext):
        pass



del HoneyCalcParser