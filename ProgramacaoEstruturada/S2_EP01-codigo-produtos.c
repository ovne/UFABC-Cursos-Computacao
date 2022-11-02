/*
Uma empresa registra o código de cada produto vendido ao longo do dia em uma lista. O gerente 
gostaria que, ao adicionar um código na lista, essa lista se mantenha ordenada (em ordem crescente).
Dessa forma, ao final do dia, é mais fácil verificar quais produtos foram vendidos.

Faça um programa que fique lendo códigos de produtos (números inteiros):

• Cada número deverá ser inserido em um vetor de códigos de produtos mantendo a ordenação (ordem crescente). 
Assuma que haverá no máximo 100 códigos de produtos. No início, o vetor não possui nenhum código de 
produto armazenado.

• Após cada inserção, imprima o vetor completo. O programa encerra quando o usuário digitar o número
-1 (não imprima o vetor após o usuário digitar -1, apenas encerre o programa).

*/

#include <stdio.h>


void imprimeVetor(int qtd, int vetor[]){
    for(int i=0; i< qtd-1; i++){
        printf("%d ",vetor[i]);
    }
    printf("%d\n",vetor[qtd-1]);
}


void ordemCrescente(int qtd, int vetor[]){
     for(int i =0; i < qtd-1; i++){ 
         int pos_menor = i; // considera o primeiro elemento como menor
         for(int j = i+1; j < qtd; j++){ //checa se algum dos posteriores é menor do que o num na posicao de menor
             if(vetor[j] < vetor[pos_menor]){
                 pos_menor = j; // se sim, entao atualiza a posicao do novo menor
            }
            // nesse ponto, com a informacao da posicao do menor, realoca os menores a esquerda do vetor (inicio)
            int aux = vetor[i];
            vetor[i] = vetor[pos_menor];
            vetor[pos_menor] = aux;
         }
     }
}


int main(){
    int vetor[100];
    int conta_elem = 0;
    int numero;

    do{
        scanf("%d",&numero);
        if(numero==-1)continue;
        vetor[conta_elem] = numero;
        conta_elem++;
        ordemCrescente(conta_elem, vetor);
        imprimeVetor(conta_elem, vetor);
    }while(numero != -1);
}
