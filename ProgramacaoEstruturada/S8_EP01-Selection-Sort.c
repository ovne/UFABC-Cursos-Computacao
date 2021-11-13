
#include <stdio.h>
#include <stdlib.h>

void printVet(int *v, int n){
    for(int i=0; i<n-1; i++)
        printf("%d ", v[i]);
    printf("%d\n", v[n-1]);
}

int selection_sort(int *v, int n) {
    int trocas = 0;
    for(int i = 0; i < n-1; i++){
        int indice_menor = i;
        for(int k = i+1; k < n; k++){
            if (v[k] < v[indice_menor])
            indice_menor = k;
        }
        int tmp = v[i];
        v[i] = v[indice_menor];
        v[indice_menor] = tmp;
        if(indice_menor != i)trocas++;
        printVet(v, n);
    }
    return trocas;
}


int main(){

    printf("Entre com o tamanho do vetor: \n");
    int n;
    scanf("%d", &n);

    int v[n];
    printf("Entre com os valores do vetor: \n");
    for(int i=0; i<n; i++)
        scanf("%d", &v[i]);

    //primeira linha vetor original
    printVet(v, n);
    int trocas = selection_sort(v, n);
    //penultima linha vetor ordenado
    printVet(v, n);
    //ultima linha, numero de trocas feitas
    printf("%d", trocas);
}

