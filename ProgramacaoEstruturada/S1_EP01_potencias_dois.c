/*
OBJETIVO:Leia uma sequência de n inteiros e mostre quantos são potências de 2.
ENTRADA: O primeiro número lido deve ser o tamanho da sequência que sera imputada.
(em seguida, deve-se imputar os numeros inteiros) 
SAÍDA: A quantidade dos números lidos que são potencia de 2.
*/

#include <stdio.h>

int main (){
    int n;
    scanf("%d", &n);

    int contador_potencias = 0;
    for (int i = 0; i < n; i++){
        int novo_numero;
        scanf("%d",&novo_numero);

        int eh_potencia2 = 1; //var aux de validacao logica
        
        if (novo_numero < 1){
            eh_potencia2 = 0;
        }
        while(novo_numero > 1){
            if (novo_numero % 2 != 0){
                eh_potencia2 = 0;
                break; // se impar então nao potencia de 2
            }
            // se par então fatorar por 2 até que seja novo_numero seja 1 ou seja impar
            novo_numero = novo_numero / 2;
        }
        if (eh_potencia2) contador_potencias++;
    }
    printf("%d",contador_potencias);
}