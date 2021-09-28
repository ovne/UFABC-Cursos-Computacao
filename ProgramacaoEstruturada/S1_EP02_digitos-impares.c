/*
OBJETIVO:Escreva um programa que leia um número inteiro (int) e imprima a quantidade de dígitos 
ímpares.

ENTRADA: 786254968 (há 3 dígitos ímpares nesse int)
SAIDA: 3
*/

#include <stdio.h>

int main(){
    //trata-se de um problema clássico de operar cada digito de um número de varios digitos.
    //Dada a natureza DECIMAL do nosso sistema numérico é possivel decompor o número em digitos
    //pela diferença desse numero com o resultado do seu quociente por 10 (resto da divisão)

    int numero;
    int digitos_impares=0;
    scanf("%d",&numero);
    while(numero>0){
        int digito = numero % 10;
        if(digito%2 !=0)digitos_impares++;
        numero = numero / 10; //div inteira por 10 elimina o digito à direita(unidade)
    }
    printf("%d",digitos_impares);
}