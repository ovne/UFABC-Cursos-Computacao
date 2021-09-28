/*
OBJETIVO: -Escreva um programa que fique lendo uma sequência de números inteiros com uma 
quantidade indeterminada de números.
-O programa deve ler números até que seja lido um número negativo. 
-Quando a leitura for finalizada, o programa deve imprimir se a sequência de números lidos está 
ordenada em ordem crescente, descrescente ou não ordenada (desconsiderar o valor negativo na sequencia)
-A sequência de números pode conter números repetidos, mas haverá pelo menos dois números diferentes na sequência.

EXEMPLO:
para a sequência 10 20 30 40 50 -99, o programa deve imprimir "CRESCENTE"
para a sequência 50 40 30 20 10 -99, o programa deve imprimir "DECRESCENTE".
para a sequência 30 20 50 10 20 -99, o programa deve imprimir "NAO ORDENADA".
Importante: não é permitido o uso de vetor e stdlib.h para resolver este exercício.
*/

#include <stdio.h>

int main(){
    int aux = 1, numero, referencia;
    int conta_se_maior=0, conta_se_menor=0, iterecao=0;
    
    // o primeiro e unico numero lido na sequencia é refencia
    scanf("%d",&numero);
    referencia = numero;
    // a cada atualização iterada os contadores registram se as entradas são maiores/menores do q a ref
    while(aux > 0){
        scanf("%d", &numero);
        if(numero < 0){
            break;
        }else{
            if(numero > referencia){
                iterecao++;
                conta_se_maior++;
                referencia = numero;
            }else if(numero < referencia){
                iterecao++;
                conta_se_menor++;
                referencia = numero;
            }else continue;
        }
    }
    
    if (iterecao == conta_se_maior){
        printf("CRESCENTE");
    }else if(iterecao == conta_se_menor){
        printf("DECRESCENTE");
    }else {
        printf("NAO ORDENADA");
    }
    printf("\nIteracoes:%d Maiores:%d Menores:%d", iterecao,conta_se_maior, conta_se_menor);
}