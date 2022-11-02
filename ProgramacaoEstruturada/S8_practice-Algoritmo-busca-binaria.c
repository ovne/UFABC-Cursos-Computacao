// Implementando um algoritmo de busca binaria.

// O algoritmo de busca binaria se relaciona com o contexto de ordenação pois esse algoritmo depende de uma
// estrutura ordenada de dados

#include <stdio.h>
#include <stdlib.h>

int buscaBinaria(int *vet, int n, int x){
    int esq = 0, dir = n-1;
    while(esq <= dir){
        int meio = (esq + dir) / 2;
        if(vet[meio] == x){
            return meio;
        }
        else if(vet[meio] < x){
            esq = meio+1;
        }
        else{
            dir = meio-1;
        }
    }
    return -1;
}

void printVet(int *vet, int n){
    for(int i=0; i<n-1; i++)
        printf("%d ", vet[i]);
    printf("%d\n", vet[n-1]);
}

int main(){
    int n = 10;
    int vet[10] = {1,2,3,4,5,6,7,8,9,10};
    printVet(vet, n);

    int busca = 11;
    printf("%d esta na posicao: %d\n", busca, buscaBinaria(vet,n,busca));

}