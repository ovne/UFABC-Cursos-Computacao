/* Escreva um programa que leia duas matrizes que contém números inteiros: matriz 1 e matriz 2. Depois de ler
os dados das duas matrizes, o programa devo imprimir a quantidade de vezes que matriz 2 aparece dentro da
matriz 1.

ENTRADA:
    [Número de linhas da matriz 1] [Número de colunas da matriz 1]
    Valores da matriz 1, linha por linha
    [Número de linhas da matriz 2] [Número de colunas da matriz 2]
    Valores da matriz 2, linha por linha

SAÍDA:
Quantidade de vezes que matriz 2 aparece dentro da matriz 1 */

#include <stdio.h>

void printMat(int n, int m, int mat [n][m]){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}


int main(){
    //Matriz 1
    int cols_m1 ,rows_m1;
    scanf("%d",&rows_m1);
    scanf("%d",&cols_m1);

    int m1 [rows_m1][cols_m1];
    for(int i=0; i < rows_m1; i++){
        for(int j=0; j < cols_m1; j++){
            scanf("%d",&m1[i][j]);
        }
    }

    // Matriz 2
    int cols_m2,rows_m2;
    scanf("%d",&rows_m2);
    scanf("%d",&cols_m2);

    int m2 [rows_m2][cols_m2];
    for(int i=0; i < rows_m2; i++){
        for(int j=0; j < cols_m2; j++){
            scanf("%d",&m2[i][j]);
        }
    }

int contador = 0;
    for(int i=0; i<rows_m1; i++){
        for(int j=0; j<cols_m1; j++){
            int contem_m2 = 1;
            for(int m=0; m < rows_m2; m++){
                for(int n=0; n < cols_m2; n++){
                    int n_m1 = m1[i+m][j+n], n_m2 = m2[m][n];
                    if(m1[i+m][j+n]!=m2[m][n])contem_m2=0;
                    //else contem_m2 = 0;
                }
            }
            if(contem_m2==1)contador++;
        }
    }
    printf("%d", contador);
}