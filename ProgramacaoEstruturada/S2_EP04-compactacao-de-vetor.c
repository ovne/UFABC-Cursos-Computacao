/*
*OBJETVIVO:Implemente a função compactar_vetor(), que recebe um vetor de inteiros v e um valor n que
*representa o tamanho do vetor. A função deve realizar a compactação dos valores seguindo um conceito
*similar à compressão Runlength. 
*
*    A compactação deve substituir cada valor no vetor por dois números: um com o valor e outro com 
*    a quantidade de vezes que o valor aparece de forma consecutiva.
*
*Observação: Nesse processo de compactação, considere apenas os valores positivos. As posições com 
*valores -1 serão consideradas como posições livres no vetor. Também considere que sempre haverá 
*espaço disponível no vetor para armazenar o resultado da compactação.
*
*ENTRADA:[10 10 10 10 10 50 50 90 -1 -1]
*SAIDA:  [10 5 50 2 90 1 -1 -1 -1 -1 ]
*/


#include <stdio.h>
//#include "compactar.h"

void compactar_vetor(int v[], int n){
    int buffer[n];
    for(int k=0; k<n; k++)buffer[k]=-1;

    int i=0; //posicao inserção no buffer    
    int pos=0; //posição de acesso em v[]
    int freq=0;
    while(pos<n-1){
        int num = v[pos];
        if(num==-1){
            pos++;
            continue;
        }
        int reps = 0;
        while(num==v[pos] && num!=-1){
            pos++;
        }
        buffer[i] = num;
        buffer[i+1] = pos-freq;
        freq=pos;
        i+=2;
        //for(int j=0; j<n; j++)printf("%d |",buffer[j]);
        //printf("here\n");

    }
    for(int j=0; j<n; j++)v[j]=buffer[j];
}


int main(){

    int vet[] = {10, 10, 10, 10, 10, 50, 50, 90, -1, -1}; //10 pos

    compactar_vetor(vet,10);

    for(int i=0; i < 10; i++){
        printf("%d ", vet[i]);
    }
}

