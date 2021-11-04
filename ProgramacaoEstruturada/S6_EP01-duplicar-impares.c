// OBJETIVO:
// Escreva a função duplica_impares, que recebe um vetor de inteiros (v) de comprimento n_entrada e retorna
// outro vetor com todos os números ímpares duplicados. A função também retorna (por referência) a quantidade
// de elementos no vetor retornado (n_retorno).

// ENTRADA:
// [11, 22, 33, 55, 44]
// SAIDA:
// [11, 11, 22, 33, 33, 55, 55, 44] e também o valor referenciado por n_retorno deve receber o valor 8

// Observação: a função deve retornar um novo vetor e não alterar o vetor de entrada (v)  


#include <stdio.h>
#include <stdlib.h>
//#include "vetor.h"

int *duplica_impares(int *v, int n_entrada, int *n_retorno) {
    // Não sei qual espaço de memoria alocar para o vetor de retorno, mas
    // o caso limite seria em que tds os elementos do vetor de entrada sejam impares
    // nesse caso, o vetor retorno deve ter no minimo (n_entrada * 2) de espaço alocado.

    int *retorno = malloc(sizeof(int) * (n_entrada*2));
    // vale lembrar que, a cada impar encontrado o n_retorno incrementa em 1, mas se nao tiver impar então n_retorno = n_entrada
    *n_retorno = n_entrada;

    int i_retorno = 0;
    for(int i=0; i< n_entrada; i++){
        if(v[i]%2 != 0){
            retorno[i_retorno] = v[i];
            retorno[i_retorno+1] = v[i];
            i_retorno += 2;
            *n_retorno = *n_retorno+1;
        }else{
            retorno[i_retorno] = v[i];
            i_retorno++;
        }
    }
    return retorno;
}

int main(){
    int n_entrada;
    scanf("%d",&n_entrada);
    int v[n_entrada];
    for(int i=0; i<n_entrada; i++){
        scanf("%d",&v[i]);
    }


    int n_retorno = 0;
    // Um ponteiro de int que recebe o retorno de uma função ponteiro de int
    int *v_retorno = duplica_impares(v, n_entrada, &n_retorno);
    printf("n_retorno : %d\n", n_retorno);
    // imprimindo o retorno da função ponteiro
    for(int i=0; i < n_retorno; i++) printf("[%d]", v_retorno[i]);
    printf("\n");
    //for(int i=0; i < n_entrada; i++) printf("[%d]", v[i]);

    // Liberando o espeçde memoria que vai ser alocado em outra função, fora da main()
    free(v_retorno);
}