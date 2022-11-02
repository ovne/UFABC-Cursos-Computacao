// Implemente a função inserir_posicao, que recebe um ponteiro para o primeiro nó de uma lista ligada, 
// e dois números inteiros, posicao e valor. 

// Crie um novo nó com o inteiro valor e o insira na posição informada na lista. A função deve devolver um 
// ponteiro ao primeiro elemento da lista. Assuma que a posição passada sempre será válida.

// Uma posição igual a 0 indica início da lista. Uma posição igual a 1 indica o nó seguinte ao início da lista
// e assim por diante. 

// O ponteiro dado pode ser nulo, o que significa que a lista inicial está vazia.

#include <stdio.h>
#include <stdlib.h>
//#include "inserir.h"

typedef struct LinkedNode LinkedNode;
struct LinkedNode {
   int data;
   LinkedNode *next;
};

LinkedNode *inserir_posicao(int posicao, int valor, LinkedNode *inicio) {
    // caso particular 01
    if(inicio == NULL){
        LinkedNode *novo;
        novo->data = valor;
        novo->next = NULL;
        return novo;
    }
    //caso particular 02
    if(posicao == 0){
        LinkedNode *novo;
        novo->data = valor;
        novo->next = inicio;
        return novo;
    }
    // percorrer a lista até que ela acabe OU um contador de referencia seja igual a posição de inserção.
    
    // ref começa em 1 uma vez q posicao 0 ja foi considerada no caso particular.
    int ref = 1; 
    for(LinkedNode *atual = inicio; atual!=NULL; atual=atual->next){
        if(ref == posicao){
            LinkedNode *novo = malloc(sizeof(LinkedNode));
            novo->data = valor;
            novo->next = atual->next;
            atual->next = novo;
            return inicio;
        }
        ref++;
    }
}

LinkedNode *inserirNoFinalRecursica(LinkedNode *inicio, int valor){

    if(inicio == NULL){
        LinkedNode *novo = malloc(sizeof(LinkedNode));
        novo->data = valor;
        novo->next = NULL;
        return novo;
    }

    inicio->next = inserirNoFinalRecursica(inicio->next, valor);
    return inicio;
}

void printNodes(LinkedNode *inicio){
    LinkedNode *atual = inicio;
    while(atual != NULL){
        printf("%d ", atual->data);
        atual = atual->next;
    }
    printf("\n");
}

void liberarListaRecursao(LinkedNode *inicio){
    // CASO BASE:
    if(inicio == NULL)return;
    // PASSO RECURSIVO
    liberarListaRecursao(inicio->next);
    free(inicio);
}

int main(){

    LinkedNode *lista = NULL;
    int len, elem;
    scanf("%d", &len);
    for(int i=0; i<len; i++){
        scanf("%d", &elem);
        lista = inserirNoFinalRecursica(lista, elem);
    }

    printNodes(lista);
    int pos = 2;
    int val = 9;
    lista = inserir_posicao(pos, val, lista);
    printNodes(lista);

    liberarListaRecursao(lista);
}