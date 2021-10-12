/* OBJETIVO:Implemente a função verificar_ordenacao_tamanho(), que recebe uma string texto. A função deve 
*verificar as palavras na string texto estão ordenadas pelo tamanho (quantidade de caracteres da palavra). 
*A função deve retornar 
*    1 se as palavras estiverem ordenadas em ordem crescente,
*    2 se estiverem ordenadas em ordem descrescente ou retornar 
*    3 se não estiverem ordenadas. 
*Cada palavra na string texto é separada por um caractere espaço. A string texto pode possuir palavras com
*o mesmo tamanho, mas haverá pelo menos duas palavras com tamanhos diferentes na string.
*
*ENTRADA/SAIDA - exemplos:
*para a string "vetor ordenacao programacao", a função deve retornar 1
*para a string "programacao ordenacao vetor", a função deve retornar 2
*para a string "vetor programacao ordenacao", a função deve retornar 3 */


#include <stdio.h>
//#include "ordenacao_tamanho.h"

int verificar_ordenacao_tamanho(char texto[]) {
    // Um vetor auxiliar para armazenar o tamanho de cada palavra
    int qtd_palavras = 50;
    int len_palavras[qtd_palavras]; 
    for(int k=0; k<qtd_palavras; k++)len_palavras[k] = -1; //vetor inicia "vazio"

    int idx = 0;
    int i = 0;
    int len_ult_palavra =0;

    // extraindo o tamanho de cada palavra - nesse contexto, são sempre separadas por espaços
    do{
        while(texto[i]==' '){
            len_palavras[idx] = i - len_ult_palavra;
            len_ult_palavra = i+1; // +1 para que considere o espaço em branco na proxima subtração
            idx++;
            i++;
        }
        i++;
    }while(texto[i]!='\0');
    
    // agora com o vetor de tamanho da cada palavra, bas verificar a ordem e se esta ordenado.
    int cresce = 1;
    int decresce = 1;

    for(int i=0; i<qtd_palavras; i++){
        int num = len_palavras[i];
        if(num == len_palavras[i+1])continue;
        if(num > len_palavras[i+1] && len_palavras[i+1]!=-1)cresce = 0;
    }

    for(int i=0; i<qtd_palavras; i++){
        int num = len_palavras[i];
        if(num == len_palavras[i+1])continue;
        if(num < len_palavras[i+1] && len_palavras[i+1]!=-1)decresce = 0;
    }

    for(int k=0; k<qtd_palavras; k++)printf("%d |", len_palavras[k]);

    if(cresce==1)return 1;
    else if(decresce==1)return 2;
    else return 3;
} 


int main(){
    char texto [101];
    printf("Digite seu texto:\n");
    fgets(texto, 101, stdin);

    printf("\nO retorno foi %d ", verificar_ordenacao_tamanho(texto));

    //vetor ordenacao programacao -> 5,9,11
    //vetor string matriz codigo programacao estruturada

}
