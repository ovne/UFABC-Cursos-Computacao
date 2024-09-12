# Generated from HoneyCalc.g4 by ANTLR 4.13.2
from antlr4 import *
if "." in __name__:
    from .HoneyCalcParser import HoneyCalcParser
else:
    from HoneyCalcParser import HoneyCalcParser

# This class defines a complete generic visitor for a parse tree produced by HoneyCalcParser.

class HoneyCalcVisitor(ParseTreeVisitor):

    # Visit a parse tree produced by HoneyCalcParser#expr.
    def visitExpr(self, ctx:HoneyCalcParser.ExprContext):
        return self.visitChildren(ctx)



del HoneyCalcParser