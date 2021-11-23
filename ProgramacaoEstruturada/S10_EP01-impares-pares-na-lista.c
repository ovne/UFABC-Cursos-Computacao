// Implemente a função impares_pares, que recebe um ponteiro para o início de uma lista ligada. 
// A função deve retornar a quantidade de números ímpares e a quantidade de números pares na lista ligada. 
// O retorna será por meio dos parâmetros qtd_impares e qtd_pares por referência.

// Considere a seguinte estrutura para um nó de lista ligada:

// typedef struct LinkedNode LinkedNode;
// struct LinkedNode {
//    int data;
//    LinkedNode *next;
// };

#include <stdio.h>
#include <stdlib.h>
//#include "lista.h"

typedef struct LinkedNode LinkedNode;
struct LinkedNode {
   int data;
   LinkedNode *next;
};

void impares_pares(LinkedNode *inicio, int *qtd_impares, int *qtd_pares) {
    *qtd_impares = 0;
    *qtd_pares = 0;

    LinkedNode *atual = inicio;
    while(atual != NULL){
        if(atual->data%2 == 0)
            *qtd_pares = *qtd_pares+1;
        else
            *qtd_impares = *qtd_impares+1;
    }
}

void printNodes(LinkedNode *inicio){
    LinkedNode *atual = inicio;
    while(atual != NULL){
        printf("%d ", atual->data);
        atual = atual->next;
    }
    printf("\n");
}

int main(){

    int impares = 0;
    int pares = 0;
    
    LinkedNode node1;
    node1.data = 10;

    LinkedNode node2;
    node2.data = 7;

    LinkedNode node3;
    node3.data = 2;

    node1.next = &node2;
    node2.next = &node3;
    node3.next = NULL;

    impares_pares(&node1, &impares, &pares);    
    printf("%d-%d\n", impares, pares);

}