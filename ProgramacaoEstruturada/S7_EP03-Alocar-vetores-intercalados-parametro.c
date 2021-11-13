// Escreva a função intercala_vetores que recebe dois vetores v_a (tamanho n_a) e v_b (tamanho n_b) e aloca 
// um novo vetor. O novo vetor deve possuir todos os números dos dois vetores de entrada em ordem crescente, 
// intercalando os valores dos dois vetores. Assuma que os dois vetores estão ordenados em ordem crescente. 

// Por exemplo, se os vetores passados nos parâmetros forem 
//     [1, 5, 8, 12, 90] e [2, 5, 7, 46], 

// a função deverá alocar [1, 2, 5, 5, 7, 8, 12, 46, 90]. 
// O vetor alocado deve ser retornado pelo parâmetro **v. Além disso a função retorna (return) o tamanho do
// vetor alocado.

#include <stdio.h>
#include <stdlib.h>
//#include "vetor.h"

int intercala_vetores(int *v_a, int n_a, int *v_b, int n_b, int **v) {

    int n_v = n_a + n_b;
    *v = malloc(sizeof(int) * n_v);
    // diferentes variaveis de iteracao para controlar o acesso em cada vetor
    int i_a=0, i_b=0, i_v=0;

    while(i_a < n_a && i_b < n_b){
        if(v_a[i_a] < v_b[i_b]){
            (*v)[i_v] = v_a[i_a];
            i_v++;
            i_a++;
        }
        else{
            (*v)[i_v] = v_b[i_b];
            i_v++;
            i_b++;
        }
    }

    if(n_a > n_b){
        for(int k=i_a; k<n_a-1; k++){
            (*v)[i_v] = v_a[k];
            i_v++;
        }
        (*v)[i_v] = v_a[n_a-1];
    }
    else{
        for(int k=i_b; k<n_b-1; k++){
            (*v)[i_v] = v_b[k];
            i_v++;
        }
        (*v)[i_v] = v_b[n_b];
    }
    return n_v;
}

// 5
// 1 2 2 2 3
// 6
// 6 7 8 9 10 11


int main(){

    int n_a=0;
    printf("n_a:\n");
    scanf("%d", &n_a);
    int *v_a = malloc(sizeof(int) * n_a);
    printf("valores v_a:\n");
    for(int i=0; i<n_a; i++)
        scanf("%d", &v_a[i]);

    int n_b=0;
    printf("n_a:\n");
    scanf("%d", &n_b);   
    int *v_b = malloc(sizeof(int) * n_b);
    printf("valores v_a:\n");
    for(int i=0; i<n_b; i++)
        scanf("%d", &v_a[i]);
    
    int *v_r;
    int n_r = intercala_vetores(v_a, n_a, v_b, n_b, &v_r);

    for (int i = 0; i < n_r; i++)
        printf("%d ", v_r[i]);

    free(v_a);
    free(v_b);
    free(v_r);

}