/*
Escreva um programa que leia uma expressão aritmética com as operações +, -, /, * e terminadas com =.
O programa deve imprimir o operacao da expressão.

Não haverá espaços em branco entre os operandos e os next_opres e também não haverá parênteses na 
equação. Lembre-se de seguir as regras de precedência (multiplicação e divisão devem ser realizadas
antes de soma e subtração).

Todos os operandos serão valores positivos, portanto, 8+-7 não é uma expressão válida. 
O operacao da expressão deve ser um número inteiro, ou seja, todas as operações são efetuadas com 
números inteiros.
*/

#include <stdio.h>


int main(){
    int a, b, tot=0;
    char next_opr, last_opr;

    scanf("%d%c",&a,&next_opr);
    while(next_opr!='='){
        last_opr = next_opr;
        scanf("%d%c",&b,&next_opr);

        if(last_opr=='*' || last_opr=='/'){
            if(last_opr=='*'){
                tot += a*b;
                a = tot;
                printf("last[%c]next[%c]\n",last_opr,next_opr);
                printf("a[%d]\nb[%d]\ntot[%d]\n=======\n",a,b,tot);
                
            }
            else{
                tot += a/b;
                a = tot;
                printf("last[%c]next[%c]\n",last_opr,next_opr);
                printf("a[%d]\nb[%d]\ntot[%d]\n=======\n",a,b,tot);
            }
        }
        else{ // não é * ou / => deve ser + ou -
            if(last_opr=='+' && next_opr!='*' && next_opr!='/'){
                // A + B +- C
                tot = a+b;
                a = tot;
                printf("last[%c]next[%c]\n",last_opr,next_opr);
                printf("a[%d]\nb[%d]\ntot[%d]\n=======\n",a,b,tot);
            }
            else if(last_opr=='-' && next_opr!='*' && next_opr!='/') {
                // A - B +- C
                tot = a-b;
                a = tot;
                printf("last[%c]next[%c]\n",last_opr,next_opr);
                printf("a[%d]\nb[%d]\ntot[%d]\n=======\n",a,b,tot);
            }else{
                // A + B */ (next)b
                tot = a;
                if(last_opr=='-')a = -b;
                else a = b;
                printf("last[%c]next[%c]\n",last_opr,next_opr);
                printf("a[%d]\nb[%d]\ntot[%d]\n=======\n",a,b,tot);
            }
        }
    }
    printf("%d", tot);
}

//30*2-90+5*4/2=