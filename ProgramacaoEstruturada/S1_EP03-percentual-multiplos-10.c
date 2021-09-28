/*
OBJETIVO: 
1) Escreva um programa que fique lendo uma sequência de números inteiros com uma quantidade 
indeterminada de números. O programa deve ler números até que seja lido um número negativo. 
2) Quando a leitura for finalizada, o programa deve imprimir o percentual de números lidos que são 
múltiplos de 10. (o número negativo deve ser desconsiderado para realizar o cálculo do percentual). 
3) O percentual deve ser impresso utilizando duas casas decimais após a vírgula.

ENTRADA(exemplo): 10 100 8 55 10 -99
SAIDA(exemplo): 0.60

Importante: não é permitido o uso de vetor e stdlib.h para resolver este exercício.
*/

#include <stdio.h>

int main(){

    int aux = 1;
    int qtd_multiplos = 0;
    int qtd_numeros = 0;
    int numero;
    while(aux>0){
        scanf("%d", &numero);
        if(numero<0)break;
        qtd_numeros++;
        if(numero % 10 == 0)qtd_multiplos++;
    }
    float percent = qtd_multiplos / (float)qtd_numeros;
    printf("%.2f",percent);
}