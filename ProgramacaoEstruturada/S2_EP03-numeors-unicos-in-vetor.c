/*
OBJETIVO: Implemente a função qtd_numeros_unicos, que recebe um vetor de inteiros v e um valor n 
que representa o tamanho do vetor. A função deve retornar a quantidade de números únicos no vetor.

ENTRADA(exemplo):[11 11 11 22 22 11 33 44 44 44]
SAIDA(exemplo): 4 (números únicos: 11, 22, 33 e 44)
*/


#include <stdio.h>
//#include "numeros_unicos.h"

int qtd_numeros_unicos(int v[], int n) {
    int unicos[n];
    int index_insercao = 0;
    unicos[index_insercao] = v[0];

    for(int i=1; i < n; i++){ //percorre v[]
        int eh_unico = 1;
        for(int j=0; j <= index_insercao; j++){ //percorre o vetor  unicos[]
            if(v[i]==unicos[j])eh_unico = 0;
        }
        if(eh_unico){
            index_insercao++;
            unicos[index_insercao] = v[i];
        }
    }
    // O numero de insercoes no vetor que separa os unicos ja é o total de unicos em v[]
    // Como as inserções são a partir do indice 0 soma 1 para retornar o valor correto
    return index_insercao + 1;
    
}

int qtd_unicos(int vet[], int n){
    // versão levemente melhor, retira a necessidade de um vet auxiliar.
    int qtd_unico = 0;
    for(int i=0; i < n; i++){
        int num = vet[i];
        int eh_unico = 1;
        for(int j=0; j < n && j!=i; j++){
            if(vet[j]==num){
                eh_unico = 0;
            }
        }
        if(eh_unico){
            qtd_unico++;
        }
    }
    return qtd_unico;
}


int main(){
    int vet[] = {11, 11, 11, 22, 22, 11, 33, 44, 44, 44};//10
    int vet2[] = {1,1,1,2,2,2,3,3,3,4,5};//11
    

    printf("Unicos: %d", qtd_unicos(vet2, 11));

}