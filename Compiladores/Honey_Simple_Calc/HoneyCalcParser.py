# Generated from HoneyCalc.g4 by ANTLR 4.13.2
# encoding: utf-8
from antlr4 import *
from io import StringIO
import sys
if sys.version_info[1] > 5:
	from typing import TextIO
else:
	from typing.io import TextIO

def serializedATN():
    return [
        4,1,10,22,2,0,7,0,1,0,1,0,1,0,1,0,1,0,1,0,3,0,9,8,0,1,0,1,0,1,0,
        1,0,1,0,1,0,5,0,17,8,0,10,0,12,0,20,9,0,1,0,0,1,0,1,0,0,3,1,0,8,
        9,1,0,1,3,1,0,4,5,23,0,8,1,0,0,0,2,3,6,0,-1,0,3,9,7,0,0,0,4,5,5,
        6,0,0,5,6,3,0,0,0,6,7,5,7,0,0,7,9,1,0,0,0,8,2,1,0,0,0,8,4,1,0,0,
        0,9,18,1,0,0,0,10,11,10,4,0,0,11,12,7,1,0,0,12,17,3,0,0,5,13,14,
        10,3,0,0,14,15,7,2,0,0,15,17,3,0,0,4,16,10,1,0,0,0,16,13,1,0,0,0,
        17,20,1,0,0,0,18,16,1,0,0,0,18,19,1,0,0,0,19,1,1,0,0,0,20,18,1,0,
        0,0,3,8,16,18
    ]

class HoneyCalcParser ( Parser ):

    grammarFileName = "HoneyCalc.g4"

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    sharedContextCache = PredictionContextCache()

    literalNames = [ "<INVALID>", "'*'", "'/'", "'**'", "'+'", "'-'", "'('", 
                     "')'" ]

    symbolicNames = [ "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "BuzzInt", "BuzzDec", "WS" ]

    RULE_expr = 0

    ruleNames =  [ "expr" ]

    EOF = Token.EOF
    T__0=1
    T__1=2
    T__2=3
    T__3=4
    T__4=5
    T__5=6
    T__6=7
    BuzzInt=8
    BuzzDec=9
    WS=10

    def __init__(self, input:TokenStream, output:TextIO = sys.stdout):
        super().__init__(input, output)
        self.checkVersion("4.13.2")
        self._interp = ParserATNSimulator(self, self.atn, self.decisionsToDFA, self.sharedContextCache)
        self._predicates = None




    class ExprContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser
            self.left = None # ExprContext
            self.term = None # Token
            self.op = None # Token
            self.right = None # ExprContext

        def BuzzInt(self):
            return self.getToken(HoneyCalcParser.BuzzInt, 0)

        def BuzzDec(self):
            return self.getToken(HoneyCalcParser.BuzzDec, 0)

        def expr(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(HoneyCalcParser.ExprContext)
            else:
                return self.getTypedRuleContext(HoneyCalcParser.ExprContext,i)


        def getRuleIndex(self):
            return HoneyCalcParser.RULE_expr

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterExpr" ):
                listener.enterExpr(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitExpr" ):
                listener.exitExpr(self)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitExpr" ):
                return visitor.visitExpr(self)
            else:
                return visitor.visitChildren(self)



    def expr(self, _p:int=0):
        _parentctx = self._ctx
        _parentState = self.state
        localctx = HoneyCalcParser.ExprContext(self, self._ctx, _parentState)
        _prevctx = localctx
        _startState = 0
        self.enterRecursionRule(localctx, 0, self.RULE_expr, _p)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 8
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [8, 9]:
                self.state = 3
                localctx.term = self._input.LT(1)
                _la = self._input.LA(1)
                if not(_la==8 or _la==9):
                    localctx.term = self._errHandler.recoverInline(self)
                else:
                    self._errHandler.reportMatch(self)
                    self.consume()
                pass
            elif token in [6]:
                self.state = 4
                self.match(HoneyCalcParser.T__5)
                self.state = 5
                self.expr(0)
                self.state = 6
                self.match(HoneyCalcParser.T__6)
                pass
            else:
                raise NoViableAltException(self)

            self._ctx.stop = self._input.LT(-1)
            self.state = 18
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,2,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    if self._parseListeners is not None:
                        self.triggerExitRuleEvent()
                    _prevctx = localctx
                    self.state = 16
                    self._errHandler.sync(self)
                    la_ = self._interp.adaptivePredict(self._input,1,self._ctx)
                    if la_ == 1:
                        localctx = HoneyCalcParser.ExprContext(self, _parentctx, _parentState)
                        localctx.left = _prevctx
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 10
                        if not self.precpred(self._ctx, 4):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 4)")
                        self.state = 11
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 14) != 0)):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self._errHandler.reportMatch(self)
                            self.consume()
                        self.state = 12
                        localctx.right = self.expr(5)
                        pass

                    elif la_ == 2:
                        localctx = HoneyCalcParser.ExprContext(self, _parentctx, _parentState)
                        localctx.left = _prevctx
                        self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                        self.state = 13
                        if not self.precpred(self._ctx, 3):
                            from antlr4.error.Errors import FailedPredicateException
                            raise FailedPredicateException(self, "self.precpred(self._ctx, 3)")
                        self.state = 14
                        localctx.op = self._input.LT(1)
                        _la = self._input.LA(1)
                        if not(_la==4 or _la==5):
                            localctx.op = self._errHandler.recoverInline(self)
                        else:
                            self._errHandler.reportMatch(self)
                            self.consume()
                        self.state = 15
                        localctx.right = self.expr(4)
                        pass

             
                self.state = 20
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,2,self._ctx)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.unrollRecursionContexts(_parentctx)
        return localctx



    def sempred(self, localctx:RuleContext, ruleIndex:int, predIndex:int):
        if self._predicates == None:
            self._predicates = dict()
        self._predicates[0] = self.expr_sempred
        pred = self._predicates.get(ruleIndex, None)
        if pred is None:
            raise Exception("No predicate with index:" + str(ruleIndex))
        else:
            return pred(localctx, predIndex)

    def expr_sempred(self, localctx:ExprContext, predIndex:int):
            if predIndex == 0:
                return self.precpred(self._ctx, 4)
         

            if predIndex == 1:
                return self.precpred(self._ctx, 3)
         




