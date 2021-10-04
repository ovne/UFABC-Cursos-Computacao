/*
OBJETIVO: Implemente a função verificar_sequencia, que recebe
    um vetor de inteiros vetor1, um valor n1 que representa o tamanho do vetor1, 
    um vetor de inteiros vetor2, e um valor n2 que representa o tamanho do vetor2. 
A função deve retornar a quantidade de vezes que a sequência de valores do vetor2 aparece no vetor1.

ENTRADA: vetor1=[11 22 33 88 11 22 33 11 22 33 11 22] e vetor2=[11 22 33], a 
SAIDA: 3
(pois a sequência [11 22 33] aparece 3 vezes no vetor1).
*/


//#include "sequencia.h"
#include <stdio.h>


void imprimeVetor(int qtd, int vetor[]){
    for(int i=0; i< qtd-1; i++){
        printf("%d ",vetor[i]);
    }
    printf("%d\n",vetor[qtd-1]);
}


int verificar_sequencia(int vetor1[], int n1, int vetor2[], int n2) {
    int num_sequencias = 0;
    for(int i =0; i < n1-n2; i++){
        int esta_contida = 1;
        for(int j = 0; j < n2; j++){
            if(vetor1[i+j]!=vetor2[j])esta_contida = 0;
        }
        if(esta_contida)num_sequencias++;
    }
    return num_sequencias;
    
}

int main(){
    int vet1[] = {11, 22, 33, 88, 11, 22, 33, 11, 22, 33, 11, 22};
    int vet2[] = {11, 22, 33};
    int qtd_v1 = 12;
    int qtd_v2 = 3;


    //imprimeVetor(3, vet2);
    int aux = verificar_sequencia(vet1, qtd_v1, vet2, qtd_v2);
    printf("%d", aux);
}