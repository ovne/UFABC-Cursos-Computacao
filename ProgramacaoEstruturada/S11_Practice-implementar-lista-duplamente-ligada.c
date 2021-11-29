#include <stdio.h>
#include <stdlib.h>

typedef struct DLinkedNode DLinkedNode;
struct DLinkedNode {
    int data;
    DLinkedNode *prev;
    DLinkedNode *next;
};


DLinkedNode *inserirFinal(DLinkedNode *inicio, int valor){
    DLinkedNode *novo = malloc(sizeof(DLinkedNode));
    if(novo == NULL) return inicio;

    novo->data = valor;
    novo->prev = NULL;
    novo->next = NULL;

    // se inicio é nulo, novo é o primeiro nó
    if(inicio == NULL) return novo;

    // do contrario, percorre os outro nós até o final
    // mesmo estratpegio de ponteiros de anterior e atual
    DLinkedNode *anterior = NULL;
    DLinkedNode *atual = inicio;
    while(atual!=NULL){
        anterior = atual;
        atual = atual->next;
    }
    // nesse ponto atual é nulo e anterior é o ultimo nó da lista
    anterior->next = novo;
    novo->prev = anterior;
    return inicio;
}


DLinkedNode *removerFinal(DLinkedNode *inicio, int valor){
    // percorrer a lista até que data == valor ou a lista acabe
    DLinkedNode *atual = inicio;
    while(atual!=NULL && atual->data != valor){
        atual = atual->next;
    }
    if(atual!=NULL){

        // o nó 'atual' sera liberado, logo, seus ponteiros para os nós anterior e atual devem ser conectados
        DLinkedNode *anterior = atual->prev;
        DLinkedNode *proximo = atual->next;
        //para um unico nó, ou para o primeiro nó, anterior é null
        if(anterior != NULL)
            anterior->next = proximo;
        else
            inicio = proximo;
        
        if(proximo != NULL)
            proximo->prev = anterior;
        free(atual);
        
    }
    return inicio;
}


void printNode(DLinkedNode *inicio){
    // Essa função imprime a lista da esquerda para a direita e da direita para esquerda
    // para demonstrar a possibilidade de percorrer as listas duplamente ligadas.

    DLinkedNode *atual;
    DLinkedNode *ultimo = NULL;
    for(atual=inicio; atual!=NULL; atual=atual->next){
        ultimo = atual;
        printf("%d ", atual->data);
    }
    printf("\n");

    // nesse ponto o ponteiro ultimo guarda a referencia para o ultimo elemento da lista
    // é possivel percorrer a lista "de tras para frente" e operar

    for(atual=ultimo; atual!=NULL; atual=atual->prev){
        printf("%d ", atual->data);
    }
    printf("\n");
}


void liberar(DLinkedNode *inicio){
    if(inicio == NULL)
        return;

    liberar(inicio->next);
    free(inicio);
}


int main(){

    DLinkedNode *inicio = NULL;
    inicio = inserirFinal(inicio, 10);
    inicio = inserirFinal(inicio, 20);
    inicio = inserirFinal(inicio, 30);
    inicio = inserirFinal(inicio, 40);
    printNode(inicio);
    inicio = removerFinal(inicio, 20);
    printNode(inicio);
    
    liberar(inicio);

}