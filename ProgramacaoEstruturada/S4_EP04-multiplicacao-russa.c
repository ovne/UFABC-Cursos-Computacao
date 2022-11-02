/* Implemente uma função recursiva chamada multiplicacao_russa que recebe dois números inteiros e retorne
a sua multiplicação. Utilize o método de multiplicação à Russa ou multiplicação Etíope. Uma descrição
informal do método é:

    1)Escreva os números A e B, que se deseja multiplicar na parte superior das colunas.
    2)Dividir A por 2, sucessivamente, ignorando o resto até chegar à unidade, escrever os resultados da coluna A.
    3)Multiplicar B por 2 tantas vezes quantas se haja dividido A por 2, escrever os resultados 
    sucessivos na coluna B.
    4)Somar todos os números da coluna B que estejam ao lado de um número ímpar da coluna A.

Exemplo 1: multiplicação 123 x 21 = 2583 (21+42+168+336+672+1344)

     A	B
6    123 21
5    61	 42
4    30	 84
3    15	 168
2    7	 336
1    3	 672
0    1	 1344 */

#include<stdio.h>
//#include "multiplicacao.h"

int multiplicacao_russa(int a, int b) {
    if(a==0)return 0;
    if(a%2==0)return 0 + multiplicacao_russa(a/2, b*2);
    return b + multiplicacao_russa(a/2, b*2);
}

int russa_iterativa(int a, int b){
    int resultado = 0;
    while (a > 0){
        if(a%2!=0)resultado += b;
        a /= 2;
        b *= 2;
        printf("a: %d b: %d\n", a, b);
    }
    return resultado;
}

int main(){
    int a=0, b=0;
    scanf("%d %d",&a,&b);

    printf("Multiplicacao de gente: %d\n", a*b);

    printf("Multiplicacao Russa: %d",multiplicacao_russa(a,b));

}