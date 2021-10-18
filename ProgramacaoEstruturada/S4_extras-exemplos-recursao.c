#include <stdio.h>

double somaElementosRecursao(double vet[], int n){
    /* Esta função recebe um vetor de numeros e o tamanho desse vetor. Calcula recursivamente
    a somatória dos elemento e retorna o resultado. */

    //BASE: vet é um vetor vazio => n==0
    if(n==0){
        return 0; //elemento neutro da soma
    }else{
        return vet[n-1] + somaElementosRecursao(vet, n-1);
    }
}

int buscaElementoRecursao(int vet[], int n, int elem){
    /* esta função recebe um vetor de inteiros, o numero total de elementos e um numero a ser buscado.
    Recursivamento verifica se o numero esta contido no vetor e retorna sua posição no caso afirmativo
    ou -1 caso negativo. */

    //base: elem esta em vet[n-1]
    if(vet[n-1]==elem){ 
        return n-1;
    }else{
        return buscaElementoRecursao(vet, n-1, elem);
    }
    return-1;
}

int buscaMenorRecursao(int vet[], int n){
    /* Esta função recebe um vetor de inteiros e a quantidade de elementos. Busca recursivamente
    o menor valor no vetor e o retorna. */

    //BASE: vetor tem apenas 1 elemento => este já é o menor
    if(n==1){
        return vet[0];
    }else{
        int num = vet[n-1];
        int menor = buscaMenor(vet, n-1);
        return (num < menor) ? num : menor; 
    }
}

int main(){
    double vet[] = {1.0,2.0,3.0,4.0};
    int v[] = {7,6,0,9,-1};

    printf("%d\n", buscaMenorRecursao(v, 5));
}