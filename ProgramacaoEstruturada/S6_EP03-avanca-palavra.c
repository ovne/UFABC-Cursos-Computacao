// Escreva uma função que procura um trecho de texto na frase e cria uma nova string com todo o conteúdo da 
// frase a partir do trecho indicado. 

// exemplo ENTRADA: 
//     frase="Frase de teste." e trecho="de"
    
// exemplo SAIDA: 
//     a função deve criar uma nova string "de teste.". 
    
// A função deve retornar NULL se não encontrar o trecho na frase. A função deve retornar uma nova string e 
// não deve alterar o vetor com a frase passada para a função.


#include <stdio.h>
#include <stdlib.h>

void avanca_palavra(char *frase, char *trecho) {

    // variaveis de iteracao
    int i_frase = 0;
    int i_trecho = 0;
    int contem_trecho = 0; // controle booleano

    while(frase[i_frase]!='\0'){
        // para cada char verifico se corresponde com o primeiro char de trecho
        if(frase[i_frase] == trecho[i_trecho]){

            contem_trecho = 1;
            while(trecho[i_trecho]!='\0' && contem_trecho){
                if(frase[i_trecho + i_frase] != trecho[i_trecho]){
                    contem_trecho = 0;
                    i_trecho = 0;
                }
                i_trecho++;
            }
            if(contem_trecho==1){
                int aux = i_frase;
                while(frase[aux] != '\0'){
                    printf("%c", frase[aux]);
                    aux++;
                }
            }
        }
        if(contem_trecho)break;
        i_frase++;
    }
}

int main(){
    //char *frase = malloc(sizeof(char) * 100);
    char frase[100];
    fgets(frase, 100, stdin);

    //char *trecho = malloc(sizeof(char) * 50);
    char trecho[50];
    fgets(trecho, 50, stdin);

    avanca_palavra(frase, trecho);
    
    //puts(retorno);

    //liberando alocações
    //free(frase);
    //free(trecho);
    //if(retorno!=NULL)free(retorno);

}

