// Implemente a função comparar_listas, que recebe dois ponteiros para os primeiros nós de duas listas ligadas.
// A função deve comparar os dados nos nós das listas para verificar se eles são iguais (retorna verdadeiro se
// forem iguais e falso caso contrário). 

// As listas são iguais apenas se tiverem o mesmo número de nós e os nós correspondentes tiverem os mesmos 
// dados. O ponteiro dado pode ser nulo, o que significa que a lista estaria vazia.

// Considere a seguinte estrutura para um nó de lista ligada:

// typedef struct LinkedNode LinkedNode;
// struct LinkedNode {
//    int data;
//    LinkedNode *next;
// };

#include <stdlib.h>
#include <stdio.h>
//#include "comparar_listas.h"

typedef struct LinkedNode LinkedNode;
struct LinkedNode {
    int data;
    LinkedNode *next;
};

int comparar_listas(LinkedNode *inicio_lista1, LinkedNode *inicio_lista2) {
    // se as listas tem tamanhos diferentes, então com certeza não sao iguais
    LinkedNode *A = inicio_lista1;
    int lenA = 0;
    while(A != NULL){
        lenA++;
        A = A->next;
    }

    LinkedNode *B = inicio_lista2;
    int lenB = 0;
    while(B != NULL){
        lenB++;
        B = B->next;
    }
    if(lenA != lenB) return 0;
    // ao fim dos laços acima os ponteiros A e B tem valores NULL (fim da lista), é preciso reatribuir para o inicio
    A = inicio_lista1;
    B = inicio_lista2;
    int eh_igual = 1;
    while(A!=NULL && B!=NULL){
        if(A->data != B->data)
            eh_igual = 0;
        A=A->next;
        B=B->next;
    }
    return eh_igual;
}

void printNodes(LinkedNode *inicio){
    LinkedNode *atual = inicio;
    while(atual != NULL){
        printf("%d ", atual->data);
        atual = atual->next;
    }
    printf("\n");
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

LinkedNode *inserirNoFinal(LinkedNode *inicio, int valor){

    LinkedNode *novo = malloc(sizeof(LinkedNode));
    if(novo == NULL) return inicio;

    novo->data = valor;
    novo->next = NULL;

    if(inicio == NULL) return novo;

    LinkedNode *anterior = NULL;
    LinkedNode *atual = inicio;
    while(atual != NULL){
        anterior = atual;
        atual = atual->next;
    }

    anterior->next = novo;
    return inicio;
}

void liberarListaRecursao(LinkedNode *inicio){
    // CASO BASE:
    if(inicio == NULL)return;
    // PASSO RECURSIVO
    liberarListaRecursao(inicio->next);
    free(inicio);
}

int main(){
    // declarando ponteiros pra lista ligada
    LinkedNode *inicio_listaA = NULL;
    LinkedNode *inicio_listaB = NULL;

    // alocando dinamicamente nas lista
    int nA, iA;
    scanf("%d", &nA);
    for(int i=0; i<nA; i++){
        scanf("%d", &iA);
        inicio_listaA = inserirNoFinal(inicio_listaA, iA);
    }

    int nB, iB;
    scanf("%d", &nB);
    for(int i=0; i<nB; i++){
        scanf("%d", &iB);
        inicio_listaB = inserirNoFinal(inicio_listaB, iB);
    }

    printf("=====================\n");
    printNodes(inicio_listaA);
    printNodes(inicio_listaB);
    printf("%d\n", comparar_listas(inicio_listaA, inicio_listaB));

    liberarListaRecursao(inicio_listaA);
    liberarListaRecursao(inicio_listaB);
}