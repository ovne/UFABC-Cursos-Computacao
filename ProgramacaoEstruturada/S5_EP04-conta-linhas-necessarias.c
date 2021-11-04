/* Escreva uma função que recebe um texto e uma largura de linha. A função deve calcular a quantidade de linhas
necessárias para imprimir o texto passado para a função. O retorno da quantidade de linhas será por referência,
no parâmetro qtd_linhas.

Algumas regras importantes para o cálculo da quantidade de linhas:

    ->a s palavras não podem ser separadas. Portanto, se não tiver espaço disponível para incluir uma palavra
     em uma linha, ela deverá ser incluída na próxima. Por exemplo, para o texto "Frase teste" e largura de
    linha 8, a divisão seria em duas linhas "Frase" e "teste".

    ->toda linha deve iniciar com uma letra, ou seja, nenhuma linha deve iniciar com o caractere espaço ou
    com pontuação (ponto, vírgula, etc). Se algum sinal de pontuação ficar exatamente após uma quebra de
    linha, a palavra que precede o sinal deve ser passada para a próxima linha, de forma que nenhuma linha
    inicie com pontuação.

    ->um caractere espaço que fique exatamente após uma quebra de linha deve ser suprimido, de forma que a
    próxima linha inicie com uma palavra (e não com um caractere espaço). */


#include<stdio.h>
//#include "conta_linhas_texto.h"

void conta_linhas(char texto[], int largura_linha, int* qtd_linhas) {
    // abordagem: descobrir o tamanho de todas as palavras preposições e artigos no texto de entrada

    int i = 0, last_i=0;
    int n = 0; //contador de palavras,proposições ou artigos.
    int tamanhos_palavras[30];
    for(int j=0; j<30; j++)tamanhos_palavras[j]=-1;

    while(1){

        char carac = texto[i];
        //verifico se o caracter é um dos que sinalizam divisão entre palavras

        if(carac > 31 && carac < 65 || carac=='\n'){
            int len = i - last_i;
            tamanhos_palavras[n] = len; 

            if(len>=1)n++;

            last_i = i+1; //'i' guarda o indice do caractere que sinaliza o fim de uma palavra, quero verificar o caractere seguinte na proxima iteração
            if(carac!=' ' && carac!='-')last_i++; // '\s' e '-' são imediatamente seguidos de uma letra, porem, ',' '.' ':' e outros, geralmente são seguidos de um '\s'
            i++;
        }
        if(carac=='\0')break;
        i++;
    }
    //nesso ponto tenho um vetor com o tamanho de todas as palavras.
    for(int k=0 ;k<n; k++)printf("[%d]", tamanhos_palavras[k]);
    printf("\n");

    int pos = 0;
    while(tamanhos_palavras[pos] != -1){
        if(tamanhos_palavras[pos] < largura_linha){
            *qtd_linhas++;
            int espaco_na_linha = largura_linha - tamanhos_palavras[pos];
            int len_proxima_palavra = tamanhos_palavras[pos+1];
            if(espaco_na_linha > len_proxima_palavra+1){
                espaco_na_linha = largura_linha - (tamanhos_palavras[pos]+len_proxima_palavra);
                pos;
            }
        }
    }

}

int main(){
    char texto[100];
    
    int largura_linha = 0;
    int *qtd_linhas = 0;

    fgets(texto, 100, stdin);
    puts(texto);

    conta_linhas(texto, largura_linha, qtd_linhas);

    printf("linhas necesarias: %d", *qtd_linhas);

}

