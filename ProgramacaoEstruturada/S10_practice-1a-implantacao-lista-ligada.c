

#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedNode LinkedNode;
struct LinkedNode{
    int data;
    LinkedNode *next; // ponteiro para outra struct (node)
};

// metodo para imprimir listas ligadas
void printNodes(LinkedNode *inicio){
    LinkedNode *atual = inicio;
    while(atual != NULL){
        printf("%d ", atual->data);
        atual = atual->next;
    }
    printf("\n");
}

// outro metodo para imprimir listas ligadas
void printNodes2(LinkedNode *inicio){
    LinkedNode *atual = inicio;
    for(atual=inicio; atual != NULL; atual = atual->next)
        printf("%d ", atual->data);
    printf("\n");
}

int main(){
    
    // alocação direta
    LinkedNode item1;
    item1.data = 10;

    LinkedNode item2;
    item2.data = 20;

    LinkedNode item3;
    item3.data = 30;

    // alocação dinâmica
    LinkedNode *item4 = malloc(sizeof(LinkedNode));
    item4->data = 45;

    LinkedNode *item5 = malloc(sizeof(LinkedNode));
    item5->data = 55; 

    // conectando os nós
    item1.next = &item2;
    item2.next = &item3;
    item3.next = item4; // operador '&' não é mais necessario pois item 4 já um ponteiro
    item4->next = item5;
    item5->next = NULL;

    printNodes2(&item1);

}