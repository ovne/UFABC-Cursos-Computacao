/* Implemente uma função que receba uma string (vetor de caracteres) contendo uma frase e remova a palavra
de índice i do vetor passado no parâmetro da função. 
    Considere que a primeira palavra tem índice 1.
    Ao remover uma palavra, é necessário remover caracteres de espaço adjacentes à palavra removida. 
    A string de entrada possui no máximo 100 caracteres e pode conter pontuação. 

(exemplo)
ENTRADA: 3, "Primeira frase de teste" 
SAIDA: "Primeira frase teste" */

#include <stdio.h>
#include <string.h>

void remover_palavra(int i, char frase[]){
    int len = 0;
    while(frase[len]!='\0')len++;
    len +=1; //me interessa ser capaz de identificar '\n'

    int pos = 0, last_pos =0, qtd_palavras =0;
    while(1){

        char letra = frase[pos];
        char fimStr = frase[pos+1]; //para validar que quando '.' for seguido de '\0' não sera contado uma palavra
        if(letra==' ' || letra==',' || letra=='.' || letra==':' || letra=='\0' && fimStr!='\0'){
            //nesse ponto pos é a posição do final de uma palavra a ser considerada
            qtd_palavras++;

            // a quantidade de palavras é também sua posição na ordem da frase
            if(qtd_palavras==i){
                if(i==1)last_pos = -1;
                int deslocamento = pos - last_pos;
                for(int k=last_pos; k<=len; k++){
                    frase[k] = frase[k+deslocamento];
                }
                break;
            }
            last_pos = pos;
            pos++;
        }
        //caso não seja algum dos casos do 1º if()
        if(letra='\0')break;
        pos++;
    }
}


int main(){
    char frase[100];
    fgets(frase, 100, stdin);
    remover_palavra(7, frase);
    puts(frase);
}

