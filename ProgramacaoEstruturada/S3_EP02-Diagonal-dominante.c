/* OBJETIVO: Escreva uma função que receba uma matriz quadrada e verifique se a matriz é estritamente diagonal
dominante por linhas. Retorne 1 se for estritamente dominante por linhas e 0 caso contrário.

Uma matriz A é estritamente diagonal dominante por linhas se:
     -> em todas as linhas da matriz, o módulo do valor na diagonal principal é maior 
     que a soma dos módulos dos demais valores da linha.  */


#include<stdio.h>
//#include "diagonal_dominante.h"

int diagonal_dominante(int n, int m[][n]) {

    int eh_dominante = 1;
    for(int i=0; i<n; i++){
        int sum_linha = 0;
        int elem_Dprincipal = 0;
        //int elem = 0;
        for(int j=0; j<n; j++){
            if(i==j){
                elem_Dprincipal = (m[i][j]>0) ? m[i][j] : (m[i][j]*-1); //guardo o modulo do elem na diagonal principal
                continue; //Pulo para o proximo para que este nao seja parte da somatória.
            }
            sum_linha += (m[i][j]>0)? m[i][j] : (m[i][j]*-1); //guardo a somatória dos demais elementos.
        }
        if(elem_Dprincipal<sum_linha){
            eh_dominante = 0;
            return eh_dominante;
        }
    }
    return eh_dominante;
}


void printMat(int n, int mat [n][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d |", mat[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int matTest [3][3] = {{-9,-5,2},{-1,-9,3},{7,-3,-9}};
    printMat(3, matTest);
    printf("\n");
    printf("%d", diagonal_dominante(3, matTest));
    return 0;
}
