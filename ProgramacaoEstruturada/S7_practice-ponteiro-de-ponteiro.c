// O que a função a seguir faz? 
// Qual a faixa de valores que pode ser obtida por 10 + rand() % 90? 
// Para praticar, escreva um programa que utilize a função criar_vetor.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Um dos parametros é um ponteiro de ponteiro, i.e, uma variavel que guarda o endereço de memoria de outra 
// variavel que tbm guarda o endereço de memoria de uma variavel.

void criar_vetor(int n, int **vetor) {
    // derreferenciar o ponteiro de ponteiro uma vez (*vetor) implica acessar o endereço de memoria que ele
    // aponta -não o valor-
	*vetor = malloc(sizeof(int) * n);

    srand(time(NULL));

	for (int i = 0; i < n; i++)
        // por fim, derreferenciando (aqui com a notação de colchete) é possível acessar e alterar os valores
        // nos endereços de memoria que os ponteiros apontam.

		(*vetor)[i] = 10 + rand() % 90;
}

int main(){
    // o ponteiro é iniciado nulo para que aponte para o vetor que sera alocando dentro da outra função
    int *vetor = NULL;
    criar_vetor(5, &vetor); // passo o indereço de memoria do ponteiro pois a função espera um ponteiro de ponteiro

    for(int i=0; i<5; i++)
        printf("%d ", vetor[i]);
    
}