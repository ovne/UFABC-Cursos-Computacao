/* Implemente a função valor_funcao, que recebe um valor inteiro m, um valor inteiro n e um ponteiro para 
um valor inteiro resultado. A função deve calcular o valor da função matemática a seguir e retornar o 
valor por meio do parâmetro resultado.

f(m,n)=∑((j+1)^2+10×∑(j+k)^2) com j variando do 1 ate m e k variando de 1 até n */

#include <stdio.h>
//#include "funcao.h"

void valor_funcao(int m, int n, int *resultado) {
    int aux = 0;
    for(int j=1; j<= m; j++){
        int prod1 = (j+1)*(j+1);
        int prod2 = 0;
        for(int k=1; k<=n; k++){
            prod2 += (j+k)*(j+k);
        }
        aux += prod1 + 10*prod2;
    }
    *resultado = aux;
}

int main(){
    int m, n;
    int resultado = 0;
    scanf("%d %d", &m, &n);
    printf("m: %d n: %d\n",m,n);
    valor_funcao(m,n,&resultado);
    printf("resultado: %d", resultado);
}