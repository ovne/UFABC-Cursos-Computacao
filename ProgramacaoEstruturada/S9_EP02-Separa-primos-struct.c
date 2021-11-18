#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include "primos.h"

typedef struct ListaNumeros {
    int *numeros;
    int *primos;
    int n_numeros;
    int n_primos;
};
typedef struct ListaNumeros ListaNumeros;

void separar_numeros_primos(ListaNumeros *lista) {

    //lista->primos = malloc(sizeof(int) * lista->n_numeros);
    int *tmp_n = malloc(sizeof(int) * lista->n_numeros);
    int *tmp_p = malloc(sizeof(int) * lista->n_numeros);
    int qtd_primos = 0;
    int qtd_n = 0;

    for(int i=0; i< lista->n_numeros; i++){

        int num = lista->numeros[i];
        int eh_primo = 1;
        for(int k=2; k<=sqrt(num); k++){
            if(num % k == 0) 
                eh_primo = 0;
        }
        if(eh_primo){
            tmp_p[qtd_primos] = num;
            qtd_primos++;
        }
        else{
            tmp_n[qtd_n] = num;
            qtd_n++;
        }
    }
    
    lista->numeros = tmp_n;
    lista->n_numeros = qtd_n;
    lista->primos = tmp_p;
    lista->n_primos = qtd_primos;
  
}

int main(){
    // cria uma nova struct do tipo ListaNumeros
    ListaNumeros lista;
    lista.n_primos = 0;
    lista.primos = NULL;
    //preencho a lista de numeros
    printf("Entre com tamanho da lista de numeros:\n");
    scanf("%d", &lista.n_numeros);
    lista.numeros = malloc(sizeof(int) * lista.n_numeros);
    printf("Entre com os numeros:\n");
    for(int i=0; i<lista.n_numeros; i++){
        scanf("%d", &lista.numeros[i]);
    }

    separar_numeros_primos(&lista);

    printf("imprimindo listas\n");
    for(int j=0; j< lista.n_numeros-1; j++)
        printf("%d ", lista.numeros[j]);
    printf("%d\n", lista.numeros[lista.n_numeros-1]);

    for(int i=0; i< lista.n_primos-1; i++)
        printf("%d ", lista.primos[i]);
    printf("%d\n", lista.n_primos-1);

    printf("%d\n", lista.n_numeros);
    printf("%d\n", lista.n_primos);

    free(lista.numeros);
    if(lista.primos!=NULL)
        free(lista.primos);
}