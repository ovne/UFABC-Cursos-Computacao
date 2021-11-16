// Escreva um programa que receba um vetor de inteiros de tamanho N e ordene os seus elementos (ordem crescente)
// considerando a soma dos dígitos em cada número. 

//     Por exemplo, o vetor [22 111 99 1234] após a ordenação será [111 22 1234 99]. 
    
// Em caso de empate na soma dos dígitos, o número com menor quantidade de digítos deve vir antes. 

//     Por exemplo, o vetor [1111 123 60 22] após a ordenação será [22 1111 60 123].

// Caso ocorra empate também neste critério, a ordenação relativa original entre os elementos deve ser mantida.

//      Por exemplo, o vetor [321 60 123] após a ordenação será [60 321 123]. 
//      (Neste exemplo, ocorreu empate na soma dos dígitos e no quantidade de dígitos entre os números
//       321 e 123. Por isso, foi mantida ordenação relativa entre os dois (321 vinha antes de 123 no vetor original).

// Um algoritmo de ordenação é estável se a ordem relativa de elementos com chaves iguais é mantida após a ordenação.
// Considerando os algoritmos de ordenação apresentados em aula, qual deles é o estavel e mais apropriado para esse problema?

#include <stdio.h>
#include <stdlib.h>

int somaDigitos(int numero, int *qtd_digitos){
    int sum = 0, counter = 0;
    while(numero > 0){
        sum += numero % 10;
        counter++;
        numero /= 10;
    }
    *qtd_digitos = counter;
    return sum;
}

void bubbleBySomaDigitos(int *vet, int n){
    int trocou = 1;
    int qtd_digitosA=0;
    int qtd_digitosB=0;

    for(int i=0; i<n-1 && trocou; i++){
        trocou = 0;
        for(int k=0; k<(n-1-i); k++){
            int somaA = somaDigitos(vet[k], &qtd_digitosA);
            int somaB = somaDigitos(vet[k+1], &qtd_digitosB);
            if(somaA > somaB){
                int aux = vet[k];
                vet[k] = vet[k+1];
                vet[k+1] = aux;
                trocou = 1;
            }
            if(somaA == somaB){
                if(qtd_digitosA > qtd_digitosB){
                    int aux = vet[k];
                    vet[k] = vet[k+1];
                    vet[k+1] = aux;
                    trocou = 1;
                }
            }
        }
    }
}

void printVet(int *vet, int n){
    for(int i=0; i<n-1; i++)
        printf("%d ", vet[i]);
    printf("%d\n", vet[n-1]);
}

int main(){
    int n = 0;
    printf("ENTRE COM O TAMANHO DO VETOR: \n");
    scanf("%d", &n);

    int vet[n];
    printf("ENTRE COM OS ELEMENTOS DO VETOR: \n");
    for(int i=0; i<n; i++)
        scanf("%d", &vet[i]);

    bubbleBySomaDigitos(vet, n);
    printVet(vet, n);
    
}