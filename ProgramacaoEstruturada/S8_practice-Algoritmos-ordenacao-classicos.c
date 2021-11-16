

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * @brief valida a ordem entre dois numeros inteiros.
 * @details verifica se dois números estão em ordem crescente (nA < nB) ou decresente (nA > nB) e retorna o valor booleano a depender do tipo de ordem a ser verificada.
 * 
 * @param numA um dos números a ser verificado.
 * @param numB no geral o número posterior a numA.
 * @param order tipo de ordenação a ser validada: 0 - decrescente, 1 - crescente, default - decrescente. 
 * @param counter contador integrado para registar quantas vezes o método foi acionado. O valor é retornado por referência.
 * @return o valor booleano da checagem da ordem.
 */
int orderChecker(int numA, int numB, int order, int *counter){
    switch (order)
    {
    case 0:
        // valida ordem decrescente
        *counter = *counter + 1;
        return (numA > numB);
    case 1:
        // valida ordem crescente
        *counter = *counter + 1;
        return (numA < numB);
    default:
        // padrão validar ordem crescente
        *counter = *counter + 1;
        return (numA > numB);
    }
}

int selectionSort(int *vet, int n, int order){
    int counter = 0;
    for(int i = 0; i < n-1; i++){
        int indice_menor = i;
        for(int k = i+1; k < n; k++){
            if (orderChecker(vet[k], vet[indice_menor], order, &counter))
            indice_menor = k;
        }
        if(indice_menor != i){
        int tmp = vet[i];
        vet[i] = vet[indice_menor];
        vet[indice_menor] = tmp;
        }
    }
    return counter;
}

int bubbleSort(int *vet, int n){
    int trocou = 1 ,counter = 0;
    for(int i=0; i<n-1 && trocou; i++){
        trocou = 0;
        for(int k=0; k<(n-1-i); k++){
            if(orderChecker(vet[k], vet[k+1], 0, &counter)){
                int aux = vet[k];
                vet[k] = vet[k+1];
                vet[k+1] = aux;
                trocou = 1;
            }
        }
    }
    return counter;
}

int insertionSort(int *vet, int n){
    int counter = 0;
    // i começa na segunda posição e itera da esquerda para a direita sobre parte nao ordenada do vetor
    for(int i=1; i<n; i++){
        int elem_atual  = vet[i];
        // j começa na posição anterior a i e itera da direita para esquerda sobre a parte ja ordenada do vetor.
        int j = i-1;
        // enquanto os elementos na parte ordenada forem maiores do que o elemento atual, move os elementos 
        // da esquerda para direita um a um.
        while(j >=0 && orderChecker(vet[j], elem_atual, 0, &counter)){
            vet[j+1] = vet[j];
            j--;
        }
        // nesse ponto, todos elementos ordenados maiores do que o atual ja foram movidos para a direita
        // j contem o indice do primeiro elemeto ordenado menor do que o atual, logo, alocamos o elemento atual na posicao seguinte.
        vet[j+1] = elem_atual;
    }
    return counter;
}

/**
 * @brief vetMaker()
 * @details aloca dinamicamente um vetor de n posições e o preenche com inteiros na ordem natural ou pseudo aleatorios entre 0 e 99.
 * 
 * @param n o tamanho do vetor a ser alocado e numero de elementos a ser preenchido.
 * @param type tipo de vetor : 0 - pseudoaleatório, 1 - naturais crescente, 2 - naturais descrescente
 * @return retorna o ponteiro de mamoria onde os valores do vetor foram salvos.
 */
int *vetMaker(int n, int type){
    // LIBERAR MEMORIA ALOCADA POR ESSE METODO!
    // free( <retorno de vetMaker()> )
    int *vet = malloc(sizeof(int) * n);

    switch (type)
    {
    case 0:
        for(int i=0; i<n; i++)
        vet[i] = rand() % 100;
    return vet;
    case 1:
        for(int i=0; i<n; i++)
            vet[i] = i+1;
    return vet;
    case 2:
        for(int i=0; i<n; i++)
            vet[i] = n-i;
    return vet;    
    default:
        for(int i=0; i<n; i++)
        vet[i] = rand() % 100;
    return vet;
    }
    
}

void printVet(int *vet, int n){
    for(int i=0; i<n-1; i++)
        printf("%d ", vet[i]);
    printf("%d\n", vet[n-1]);
}

int main(){
    // define a semente para os numero pseudoaleatorios com base do timer so sistema.
    srand(time(NULL));

    int n = 10;
    int *vet = vetMaker(n,0);
    printf("VETOR ORIGINAL: \n");
    printVet(vet, n);
    int aux = selectionSort(vet, n, 1);
    printf("ORDENACAO SELECTION SORT: \n");
    printVet(vet, n);
    printf("%d\n", aux);
    free(vet);

    vet = vetMaker(n, 0);
    printf("VETOR ORIGINAL: \n");
    printVet(vet, n);
    int aux2 = bubbleSort(vet, n);
    printf("ORDENACAO BUBBLE SORT: \n");
    printVet(vet, n);
    printf("%d\n", aux2);
    free(vet);

    vet = vetMaker(n, 0);
    printf("VETOR ORIGINAL: \n");
    printVet(vet, n);
    int aux3 = insertionSort(vet, n);
    printf("ORDENACAO INSERTION SORT: \n");
    printVet(vet, n);
    printf("%d\n", aux3);
    free(vet);

}