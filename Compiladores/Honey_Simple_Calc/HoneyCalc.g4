grammar HoneyCalc
;

expr: left=expr op=('*'|'/'|'**') right=expr 
    | left=expr op=('+'|'-') right=expr 
    | term=(BuzzInt | BuzzDec)                          
    | '(' expr ')'
;

BuzzInt : [0-9]+
;
BuzzDec : [0-9]+'.'[0-9]+
;
WS  :   [ \t]+ -> skip
;