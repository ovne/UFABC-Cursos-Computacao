/* Escreva uma função que recebe uma frase e retorne o valor de algumas estatísticas sobre os comprimentos
das palavras na frase. O retorno será realizado por parâmetros passados por referência. As frases podem
conter pontuação.

Valores que devem ser retornados:
    min: comprimento da menor palavra
    max: comprimento da maior palavra
    soma: soma dos comprimentos de todas as palavras
    media: média dos comprimentos das palavras
    desvio: desvio padrão dos comprimentos das palavras, conforme fórmula a seguir */


#include<stdio.h>
#include<math.h>
//#include "frase.h"

void estatisticas_frase(char frase[], int *min, int *max, int *soma, double *media, double *desvio) {

    *min = 46; //a maior palavra da lingua portuguesa tem 46 caraxteres. Temos boas chances da 1a palavra da frase ser menor do que ela :p
    *max = 0;
    *soma = 0;
    *media = 0.0;
    *desvio = 0.0;
    
    int pos = 0, last_pos = 0, qtd = 0;
    //para o calculo do desvio, é preciso recuperar o valor dos tamanhos das palavras
    int vet_lens[20];
    for(int i=0; i<20; i++)vet_lens[i]==-1;

    while(1){

        char letra = frase[pos];
 
        if(letra > 31 && letra < 65 || letra=='\n'){
            int len = pos - last_pos;
            vet_lens[qtd] = len; 

            if(len>=1)qtd++;
            // acumulando na soma
            *soma = *soma + len;

            // nesse ponto, verifico se o tamanho atual é maior que o maior ou menor que o menor
            if(len > *max)*max = len;
            if(len < *min)*min = len;

            last_pos = pos+1; //'pos' guarda o indice do caractere que sinaliza o fim de uma palavra, quero verificar o caractere seguinte na proxima iteração
            if(letra!=' ' && letra!='-')last_pos++; // '\s' e '-' são imediatamente seguidos de uma letra, porem, ',' '.' ':' e outros, geralmente são seguidos de um '\s'
            pos++;
        }
        if(letra=='\0')break;
        pos++;
    }
    //nesse ponto já tenho os valores para média e desvio
    *media = *soma / (double)qtd;

    double sigma = 0.0;
    for(int i=0; i<qtd; i++){
        //printf("[%d]", vet_lens[i]);
        sigma += pow((vet_lens[i] - *media),2) / qtd;
    }
    *desvio = sqrt(sigma);
}


int main(){
    char frase[50];
    fgets(frase, 100, stdin);
    puts(frase);

    int min = 46;
    int max = 0;
    int soma = 0;
    double media = 0.0;
    double desvio = 0.0;

    estatisticas_frase(frase, &min, &max, &soma, &media, &desvio);
        
    printf("Estatistica dessa frase:\n");
    printf("menor: %d\n", min);
    printf("maior: %d\n", max);
    printf("Soma: %d\n", soma);
    printf("media: %.2lf\n", media);
    printf("desvio: %.2lf\n", desvio);

}

