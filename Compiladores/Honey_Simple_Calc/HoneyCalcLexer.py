# Generated from HoneyCalc.g4 by ANTLR 4.13.2
from antlr4 import *
from io import StringIO
import sys
if sys.version_info[1] > 5:
    from typing import TextIO
else:
    from typing.io import TextIO


def serializedATN():
    return [
        4,0,10,59,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,
        6,7,6,2,7,7,7,2,8,7,8,2,9,7,9,1,0,1,0,1,1,1,1,1,2,1,2,1,2,1,3,1,
        3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,4,7,38,8,7,11,7,12,7,39,1,8,4,8,43,
        8,8,11,8,12,8,44,1,8,1,8,4,8,49,8,8,11,8,12,8,50,1,9,4,9,54,8,9,
        11,9,12,9,55,1,9,1,9,0,0,10,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,
        9,19,10,1,0,2,1,0,48,57,2,0,9,9,32,32,62,0,1,1,0,0,0,0,3,1,0,0,0,
        0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,
        15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,1,21,1,0,0,0,3,23,1,0,0,0,5,
        25,1,0,0,0,7,28,1,0,0,0,9,30,1,0,0,0,11,32,1,0,0,0,13,34,1,0,0,0,
        15,37,1,0,0,0,17,42,1,0,0,0,19,53,1,0,0,0,21,22,5,42,0,0,22,2,1,
        0,0,0,23,24,5,47,0,0,24,4,1,0,0,0,25,26,5,42,0,0,26,27,5,42,0,0,
        27,6,1,0,0,0,28,29,5,43,0,0,29,8,1,0,0,0,30,31,5,45,0,0,31,10,1,
        0,0,0,32,33,5,40,0,0,33,12,1,0,0,0,34,35,5,41,0,0,35,14,1,0,0,0,
        36,38,7,0,0,0,37,36,1,0,0,0,38,39,1,0,0,0,39,37,1,0,0,0,39,40,1,
        0,0,0,40,16,1,0,0,0,41,43,7,0,0,0,42,41,1,0,0,0,43,44,1,0,0,0,44,
        42,1,0,0,0,44,45,1,0,0,0,45,46,1,0,0,0,46,48,5,46,0,0,47,49,7,0,
        0,0,48,47,1,0,0,0,49,50,1,0,0,0,50,48,1,0,0,0,50,51,1,0,0,0,51,18,
        1,0,0,0,52,54,7,1,0,0,53,52,1,0,0,0,54,55,1,0,0,0,55,53,1,0,0,0,
        55,56,1,0,0,0,56,57,1,0,0,0,57,58,6,9,0,0,58,20,1,0,0,0,5,0,39,44,
        50,55,1,6,0,0
    ]

class HoneyCalcLexer(Lexer):

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    T__0 = 1
    T__1 = 2
    T__2 = 3
    T__3 = 4
    T__4 = 5
    T__5 = 6
    T__6 = 7
    BuzzInt = 8
    BuzzDec = 9
    WS = 10

    channelNames = [ u"DEFAULT_TOKEN_CHANNEL", u"HIDDEN" ]

    modeNames = [ "DEFAULT_MODE" ]

    literalNames = [ "<INVALID>",
            "'*'", "'/'", "'**'", "'+'", "'-'", "'('", "')'" ]

    symbolicNames = [ "<INVALID>",
            "BuzzInt", "BuzzDec", "WS" ]

    ruleNames = [ "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", 
                  "BuzzInt", "BuzzDec", "WS" ]

    grammarFileName = "HoneyCalc.g4"

    def __init__(self, input=None, output:TextIO = sys.stdout):
        super().__init__(input, output)
        self.checkVersion("4.13.2")
        self._interp = LexerATNSimulator(self, self.atn, self.decisionsToDFA, PredictionContextCache())
        self._actions = None
        self._predicates = None


