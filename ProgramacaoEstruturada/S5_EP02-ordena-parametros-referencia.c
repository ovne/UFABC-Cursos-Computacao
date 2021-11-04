/* Escreva uma função que ordena os argumentos passados nos parâmetros.

Os valores referenciados pelos parâmetros a, b e c devem ser trocados, caso necessário, 
para que a <= b <= c. */

#include<stdio.h>
void ordena(int *a, int *b, int *c) {
    int aux = 0;
    if(*a > *b){
        aux = *a;
        *a = *b;
        *b = aux;
    }
    if(*b > *c){
        aux = *b;
        *b = *c;
        *c = aux;
    }
    if(*a > *b){
        aux = *a;
        *a = *b;
        *b = aux;
    }
}

int main(){
    int a = 1;
    int b = 1; 
    int c = 1;

    // os argumento da função ordena() são ponteiros, por isso, referencio as variaveis a,b e c por seus respectivos endereços de memoria.
    ordena(&a, &b, &c);
    printf("a: %d b: %d c:%d\n", a, b, c);
}
