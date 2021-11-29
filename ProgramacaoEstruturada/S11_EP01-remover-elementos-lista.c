// Um disco voador abandonado foi encontrado e dentro do disco havia sequências de DNA de outro planeta, que 
// também era formado pelas quatro bases A, C, G, T. Contudo, quando entrou em contato com a água, as bases 
// C e G foram eliminadas da sequência.

// Implemente a função remover_bases, que recebe uma referência para o início de uma lista ligada com as bases 
// que formam o DNA. A função deve retornar o DNA modificado após contato com a água. Ou seja, a função irá 
// remover todos os nós com as bases C e G. 
//     Por exemplo, para a sequência AAGCGAGTCAGGCTGAAGCTAGCTA, 
//     a função retornaria a lista AAATATAATATA. 

// A função deve retornar o ponteiro para o início da lista após a remoção dos nós.

// Observação: a função deve remover os nós da lista original e não alocar uma nova lista com novos nós.


#include <stdlib.h>
#include <stdio.h>
//#include "dna.h"

typedef struct LinkedNode LinkedNode;
struct LinkedNode {
   char data;
   LinkedNode *next;
};

LinkedNode *remover_bases(LinkedNode *inicio) {
    LinkedNode *anterior = NULL;
    LinkedNode *atual = inicio;

    while(atual != NULL){

        if(atual->data == 'C' || atual->data == 'G'){
            LinkedNode *temp;
            // CASO PARTICULAR: tem C ou G na primeira posicao
            if(anterior == NULL){
                inicio = atual->next;
                atual = inicio;
                //free(temp);
                continue;
            }

            anterior->next = atual->next;
            temp = atual;
            atual = atual->next;
            //free(temp);
            continue;
        }
        anterior = atual;
        atual = atual->next;
    }
    return inicio;
}

LinkedNode *insereBaseFinal(LinkedNode *inicio, char base){
    LinkedNode *novo = malloc(sizeof(LinkedNode));
    if(novo==NULL)return inicio;

    novo->data = base;
    novo->next = NULL;

    if(inicio == NULL)return novo;
    
    LinkedNode *anterior = NULL;
    LinkedNode *atual = inicio;
    while(atual != NULL){
        anterior = atual;
        atual = atual->next;
    }
    anterior->next = novo;
    return inicio;
}

void printDENEA(LinkedNode *inicio){
    LinkedNode *atual = inicio;
    while(atual!=NULL){
        printf("%c ", atual->data);
        atual = atual->next;
    }
    printf("\n");
}

void liberaDENEA(LinkedNode *inicio){
    // CASO BASE:
    if(inicio == NULL)return;
    // PASSO RECURSIVO
    liberaDENEA(inicio->next);
    free(inicio);
}

int main(){

    LinkedNode *denea = NULL;
    
    denea = insereBaseFinal(denea, 'G');
    denea = insereBaseFinal(denea, 'A');
    denea = insereBaseFinal(denea, 'C');
    denea = insereBaseFinal(denea, 'T');
    denea = insereBaseFinal(denea, 'G');
    denea = insereBaseFinal(denea, 'C');
    denea = insereBaseFinal(denea, 'A');
    denea = insereBaseFinal(denea, 'A');
    denea = insereBaseFinal(denea, 'T');
    denea = insereBaseFinal(denea, 'C');
    denea = insereBaseFinal(denea, 'A');
    denea = insereBaseFinal(denea, 'G');

    printDENEA(denea);
    
    denea = remover_bases(denea);
    printDENEA(denea);

    liberaDENEA(denea);

}