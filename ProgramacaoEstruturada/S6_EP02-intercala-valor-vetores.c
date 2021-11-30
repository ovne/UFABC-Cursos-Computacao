// OBJETIVO:
// Escreva um programa que leia dois vetores de inteiros. Assuma que os dois vetores estão ordenados em ordem crescente.
// Depois, o programa deve imprimir todos os números lidos em ordem crescente, intercalando os valores dos dois
// vetores. 

// REGRA: Importante: o programa não pode usar colchetes, portanto, será necessário utilizar aritmética de 
// ponteiros para acessar os elementos dos vetores. Para alocar os vetores, use malloc.

// ENTRADA: se os vetores lidos forem [1, 5, 8, 12, 90] e [2, 5, 7, 46], 
// SAIDA: o programa deverá imprimir 1, 2, 5, 5, 7, 8, 12, 46, 90.

// ABORDAGEM: colocar tudo num mesmo vetor auxiliar pra depois ordena-lo.

// 1 5 8 12 90
// 2 5 7 46

// 5
// 1 2 2 2 3
// 6
// 6 7 8 9 10 11

#include <stdio.h>
#include <stdlib.h>

int main(){
    int len_v1, len_v2;

    scanf("%d", &len_v1);
    // alocação dinamica do vetor e leio seus valores em seguida 
    int *vet1 = malloc(sizeof(int) * len_v1);
    for(int i=0; i<len_v1; i++)
        scanf("%d", vet1 + i);

    scanf("%d", &len_v2); 
    int *vet2 = malloc(sizeof(int) * len_v2);
    for(int i=0; i<len_v2; i++)
        scanf("%d", vet2 + i);

    int itr_v1=0, itr_v2=0;

    while(itr_v1 < len_v1 && itr_v2 < len_v2){
        if(*(vet1 + itr_v1) < *(vet2 + itr_v2)){
            printf("%d ", *(vet1 + itr_v1));
            itr_v1++;
        }
        else{
            printf("%d ",*(vet2 + itr_v2));
            itr_v2++;
        }
    }

    if(len_v1 > len_v2){
        for(int k=itr_v1; k<len_v1-1; k++)printf("%d ",*(vet1 + k));
        printf("%d", *(vet1 + len_v1-1));
    }
    else{
        for(int k=itr_v2; k<len_v2-1; k++)printf("%d ",*(vet2 + k));
        printf("%d", *(vet2 + len_v2-1));

    }
    // liberando a memoria alocada para os dois vetores
    free(vet1);
    free(vet2);
}