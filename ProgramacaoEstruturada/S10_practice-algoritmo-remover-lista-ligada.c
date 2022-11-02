
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

LinkedNode *remover(LinkedNode *inicio, int valor){
    // ao remover um item da lista, é preciso a informação do ponteiro do anterior para que este aponte
    // para o proximo ao item que esta sendo removido
    LinkedNode *anterior = NULL;
    LinkedNode *atual = inicio;

    // percorrer toda a lista ligada em busca do valor
    while(atual != NULL && atual->data != valor){
        anterior = atual;
        atual = atual->next;
    }

    //nesse ponto a lista foi percorrida sem encontrar o valor OU
    // o ponteiro 'atual' apresenta no campo data o parametro valor.
    if(atual != NULL){
        if(anterior != NULL)
            anterior->next = atual->next;
        else
            inicio = atual->next;
        //liberando o espaço para o ponteiro 'atual' removemos o mesmo da lista encadeada.
        free(atual);
    }
    return inicio;
}

LinkedNode *removerRecusiva(LinkedNode *inicio, int valor){
    if(inicio == NULL)return NULL;
    if(inicio->data == valor){
        LinkedNode *temp = inicio->next;
        free(inicio);
        return temp;
    }
    inicio->next = removerRecusiva(inicio->next, valor);
    return inicio;
}

// um metodo importante que ainda nao havia sido implementado é o metodo para
// liberar o espaço de memória alocada para os nós das listas ligadas

void liberaListaLigada(LinkedNode *inicio){
    // percorrer a lista liberando a memoria alocada para os nós um a um.
    // antes que o nó seja liberado é preciso guardar a informação do proximo nó que ele aponta 
    LinkedNode *atual = inicio;
    LinkedNode *aremover;
    while(atual != NULL){
        aremover = atual;
        atual = atual->next;
        free(aremover);
    }
}

void liberarListaRecursao(LinkedNode *inicio){
    // CASO BASE:
    if(inicio == NULL)return;
    // PASSO RECURSIVO
    liberarListaRecursao(inicio->next);
    free(inicio);
}

int main(){
    // o primeiro nó inicia vazio e sem apontar para nada
    LinkedNode *inicio = NULL;

    inicio = inserirNoFinalRecursica(inicio, 10);
    inicio = inserirNoFinalRecursica(inicio, 20);
    inicio = inserirNoFinalRecursica(inicio, 40);    

    printNodes(inicio);

    inicio = remover(inicio, 20);
    printNodes(inicio);
    inicio = inserirNoFinalRecursica(inicio, 20);
    inicio = removerRecusiva(inicio, 10);
    inicio = removerRecusiva(inicio, 20);

    printNodes(inicio);
    liberarListaRecursao(inicio);

}