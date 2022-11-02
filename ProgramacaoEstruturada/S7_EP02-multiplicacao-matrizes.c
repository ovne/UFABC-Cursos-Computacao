// OBJETIVO:
// Escreva um programa que lerá duas matrizes A e B e depois imprime o resultado da multiplicação das matrizes.

// ENTRADA:

//     n_linhas_A n_colunas_A
//     dados da matriz A (linha por linha)
//     n_linhas_B n_colunas_B
//     dados da matriz B (linha por linha)

// SAÍDA:
//     matriz resultado da multiplicação A x B

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int **criar_matriz(int n_linhas, int n_colunas) {
    // primeiro alocar para cada linha um ponteiro int
    int **mat = malloc(sizeof(int *) * n_linhas);

    // depois alocar para cada ponteiro n_colunas posições de int
    for(int i=0; i<n_linhas; i++)
        mat[i] = malloc(sizeof(int) * n_colunas);
    
    printf("Entre com os valores da matriz: \n");
    //srand(time(NULL));
    for(int l=0; l<n_linhas; l++){
        for(int c=0; c<n_colunas; c++){
            //mat[l][c] = rand() % 10 + 1;
            scanf("%d", &(mat[l][c]));
        }
    }
    return mat;
}

int **multiplica_matrizes(int **matA, int nl_A, int nc_A, int **matB, int nl_B, int nc_B){
    // é condição indispensavel para a multiplicação de matrizes que nº de colunas da primeira seja o mesmo nº de linhas da segunda
    // outra condição imposta é que a matriz resultante tera o nº de linhas da primeira e o nº de colunas da segunda
    int nl_AB = nl_A;
    int nc_AB = nc_B;
    // alocando espaço para a matriz resultado:
    int **matAB = malloc(sizeof(int *) * nl_AB);
    for(int i=0; i<nl_A; i++)
        matAB[i] = malloc(sizeof(int) * nc_AB);
    
    for(int i=0; i<nl_AB; i++){
        for(int j=0; j<nc_AB; j++){
            int elementoAB = 0;
            for(int m=0; m<nc_A; m++){
                elementoAB += matA[i][m] * matB[m][j];
            }
            matAB[i][j] = elementoAB;
        }
    }
    return matAB;
}

void printMat(int **matriz, int n_linhas, int n_colunas) {
    for (int l = 0; l < n_linhas; l++) {
        for (int c = 0; c < n_colunas; c++)
            printf("%d ", matriz[l][c]);
        printf("\n");
    }
}

void liberar_matriz(int **matriz, int n_linhas) {
    // primeiro libero o espaço de cada ponteiro simples (linhas da matriz)
    for(int i=0; i<n_linhas; i++)
        free(matriz[i]);
    // por fim libero o espaço alocado para o ponteiro de ponteiro
    free(matriz);
}

int main(){
    // lendo as dimensoes, valores e imprimindo as matrizes na sequencia
    printf("Entre com as dimensoes da matriz A: \n");
    int nl_A, nc_A;
    scanf("%d %d", &nl_A, &nc_A);
    int **matA = criar_matriz(nl_A, nc_A);
    printMat(matA, nl_A, nc_A);

    // matriz B
    printf("Entre com as dimensoes da matriz B: \n");
    int nl_B, nc_B;
    scanf("%d %d", &nl_B, &nc_B);
    int **matB = criar_matriz(nl_B, nc_B);
    printMat(matB, nl_B, nc_B);

    // multiplicando matA e matB
    int **matAB = multiplica_matrizes(matA, nl_A, nc_A, matB, nl_B, nc_B);
    printMat(matAB, nl_A, nc_B);

    // liberar a memoria alocada para as matrizes
    liberar_matriz(matA, nl_A);
    liberar_matriz(matB, nl_B);
    liberar_matriz(matAB, nl_A);
    
}