/* OBJETIVO: Faça um programa que leia uma frase (no máximo 100 caracteres) e imprima a quantidade de palavras 
na frase lida.

ENTRADA: Este eh um teste.

SAÍDA: 4 */

#include<stdio.h>

int main(){
    char frase[100];
    fgets(frase, 100, stdin);

    int qtd_palavras=0;
    int i=0;
    int flow = 1;
    while(flow){
        char letra = frase[i];
        if(letra==' ' || letra=='.' || letra=='\0'){
            qtd_palavras++;
            i++;
        }
        if(letra=='\0')break;
        i++;
    }
    printf("%d",qtd_palavras);
}

