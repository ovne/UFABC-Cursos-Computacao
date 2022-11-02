
#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedNode LinkedNode;
struct LinkedNode{
    int data;
    LinkedNode *next; // ponteiro para outra struct (node)
};

void printNodes(LinkedNode *inicio){
    LinkedNode *atual = inicio;
    while(atual != NULL){
        printf("%d ", atual->data);
        atual = atual->next;
    }
    printf("\n");
}

LinkedNode *inserirNoFinal(LinkedNode *inicio, int valor){
    LinkedNode *novo = malloc(sizeof(LinkedNode));
    // como é sabido, não ha garantia de que malloc() sempre consegue alocar memoria
    // na situação da alocação falhar a função retorna o ultimo nó, i.e, o proprio parametro inicio
    if(novo == NULL) return inicio;

    novo->data = valor;
    novo->next = NULL;

    // e se o nó for nulo, então a função deve retornar o novo nó no lugar
    if(inicio == NULL) return novo;

    // caso contrario, então é preciso percorrer todos os nós da lista para colocar o novo nó e o valor no final
    LinkedNode *anterior = NULL;
    LinkedNode *atual = inicio;
    while(atual != NULL){
        anterior = atual;
        atual = atual->next;
    }
    // nesse ponto, atual é um nó nulo é anterior é o nó imediatamente anterior a ele
    // de forma que, para que o novo nó seja encadeado no final da lista, devemos fazer com que anterior aponte para ele 
    anterior->next = novo;

    return inicio;
}

LinkedNode *inserirNoFinalRecursica(LinkedNode *inicio, int valor){


    // o método de inserção de elementos para uma lista ligada tambem pode ser implementado recusivamente
    // o CASO BASE seria aquele em que o nó é nulo, então, a função aloca um novo nó o seu valor e ponteiro
    if(inicio == NULL){
        LinkedNode *novo = malloc(sizeof(LinkedNode));
        novo->data = valor;
        novo->next = NULL;
        return novo;
    }
    // PASSO RECURSIVO: sabendo que o primeiro elemento da lista é sempre nulo, entao nesse ponto posso 
    // chamar a função recursivamente 
    inicio->next = inserirNoFinalRecursica(inicio->next, valor);
    return inicio;
}

int main(){
    // o primeiro nó inicia vazio e sem apontar para nada
    LinkedNode *inicio = NULL;

    // vamos adicioar valores a essse no e aos seguintes, criando novos nós e os linkando
    inicio = inserirNoFinalRecursica(inicio, 10);
    inicio = inserirNoFinalRecursica(inicio, 20);
    inicio = inserirNoFinalRecursica(inicio, 40);    

    printNodes(inicio);
}