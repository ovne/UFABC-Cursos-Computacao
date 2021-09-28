/*
Escreva um programa que leia uma expressão aritmética com as operações +, -, /, * e terminadas com =.
O programa deve imprimir o operacao da expressão.

Não haverá espaços em branco entre os operandos e os operadores e também não haverá parênteses na 
equação. Lembre-se de seguir as regras de precedência (multiplicação e divisão devem ser realizadas
antes de soma e subtração).

Todos os operandos serão valores positivos, portanto, 8+-7 não é uma expressão válida. 
O operacao da expressão deve ser um número inteiro, ou seja, todas as operações são efetuadas com 
números inteiros.
*/

#include <stdio.h>


int main(){
    int a, b, tot=0;
    char operador, last_opr;

    scanf("%d%c",&a,&operador);
    while(operador!='='){
        last_opr = operador;
        scanf("%d%c",&b,&operador);

        if(last_opr=='*' || last_opr=='/'){
            if(last_opr=='*'){
                tot += a*b;
                a = tot;
            }
            else{
                tot += a/b;
                a = tot;
            }
        }
        else{ // não é * ou / => deve ser + ou -
            if(last_opr=='+' && operador!='*' && operador!='/'){
                tot = a+b;
                a = tot;
            }
            else if(last_opr=='-' && operador!='*' && operador!='/') {
                tot = a-b;
                a = tot;
            }else{
                // a + b * (next)b
                tot = a;
                if(last_opr=='-')a = -b;
                else a = b;
            }
        }
    }
    printf("%d", tot);
}