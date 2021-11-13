// Escreva as funções criar_matriz e liberar_matriz.

// A função criar_matriz deve alocar e retornar uma matriz com as dimensões especificadas nos parâmetros 
// n_linhas e n_colunas. A matriz deve ser preenchida com zeros e uns de forma intercalada, conforme o 
// exemplo a seguir (n_linhas=3 e n_colunas=4):

// 0 1 0 1
// 1 0 1 0
// 0 1 0 1

// A função liberar_matriz recebe o ponteiro para uma matriz e deve liberá-la da memória (free).

#include <stdio.h>
#include <stdlib.h>
//#include "matriz.h"

double **criar_matriz(int n_linhas, int n_colunas) {
    // primeiro alocar para cada linha um ponteiro double
    double **mat = malloc(sizeof(double *) * n_linhas);

    // depois alocar para cada ponteiro n_colunas posições de double
    for(int i=0; i<n_linhas; i++)
        mat[i] = malloc(sizeof(double) * n_colunas);

    //preencher com 0 e 1 de forma intercalada
    for(int l=0; l<n_linhas; l++){
        for(int c=0; c<n_colunas; c++){
            mat[l][c] = (l+c)%2 == 0 ? 0 : 1;
        }
    }
    return mat;
}

void liberar_matriz(double **matriz, int n_linhas) {
    // primeiro libero o espaço de cada ponteiro simples (linhas da matriz)
    for(int i=0; i<n_linhas; i++)
        free(matriz[i]);
    // por fim libero o espaço alocado para o ponteiro de ponteiro
    free(matriz);
}

void printMat(double **matriz, int n_linhas, int n_colunas) {
    for (int l = 0; l < n_linhas; l++) {
        for (int c = 0; c < n_colunas; c++)
            printf("%.0lf ", matriz[l][c]);
        printf("\n");
    }
}

int main() {
    int n_linhas, n_colunas;
    scanf("%d %d", &n_linhas, &n_colunas);
    
    // o retorno da criar_matriz() é um ponteiro de ponteiro. 
    double **mat = criar_matriz(n_linhas, n_colunas);
    
    printMat(mat, n_linhas, n_colunas);
    
    liberar_matriz(mat, n_linhas);
}