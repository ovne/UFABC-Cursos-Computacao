/*
Escreva um programa que leia os valores inteiros de n e m, e então imprima o valor da função 
definida como:

    f(n,m) = Somatório(0 < i <= n){ m + 5 * Somatório(0 < k < k <= m){(k+1)^2} }

    obs:esse é um simulacro de uma função que foi exibida em notação matamática no enunciado original.
*/

#include <stdio.h>

int main(){
    int n;
    int m;
    scanf("%d %d", &n,&m);

    // O somatorio "interno" na função é independente do resto da função
    //portanto, pode ser calculado separadamente:

    int sigma_interno = 0;
    for (int k=1; k<=m; k++){
        sigma_interno += (k+1)*(k+1);
    }

    // com o valor do somatório interno calculo o somatório externo que depende desse valor:
    int sigma_externo = 0;
    for (int i=1; i<=n; i++){
        sigma_externo += m + 5*sigma_interno;
    }
    printf("%d",sigma_externo);

}