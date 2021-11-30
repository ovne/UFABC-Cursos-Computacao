/*
Neste exercício, implemente as funções a seguir:

=> void converte_numero_para_vetor_de_digitos(int n, int v[]): esta função deve converter um número inteiro 
para um vetor contendo em cada item os dígitos deste número, do mais significativo para o menos 
significativo. Após último dígito, inclua o valor -1 para indicar o fim da sequência. Assuma que o vetor
possui espaço suficiente para todos os dígitos. Por exemplo, para o número n = 246, o vetor será preenchido
da seguinte forma: [2, 4, 6, -1].

=> int eh_palindromo(int v[]): recebe um vetor e indica se é palíndromo (0: não, 1: sim). O vetor passado 
é resultado do uso do processo descrito no item anterior. Portanto, a função deverá procurar o final da 
sequência (valor -1) antes de realizar a verificação. A sequência [1, 2, 3, -1] não é palíndromo, mas a 
sequência [2, 6, 2, -1] é palíndromo.

=> int maior_palindromo(int m, int fatores[2]): a função deve procurar o maior inteiro palíndromo P 
resultado do produto P = A x B. Neste produto, A <= m e B <= m (m é parâmetro da função). A e B são 
números naturais. Por exemplo, para m=25, o maior palíndromo é 575, sendo A=25 e B=23. Nesse caso, o 
retorno da função será 575 e os elementos no parâmetro fatores deverão ser preenchidos da seguinte 
forma: fatores[0]=25 e fatores[1]=23. Assuma que o vetor passado para a função possui duas posições 
(índices 0 e 1).
*/


#include <stdio.h>
//#include "maior_palindromo.h"


void converte_numero_para_vetor_de_digitos(int n, int v[]){
    int num = n;
    int qtd_dig = 0;
    // descobrir a qtd de digitos para operar a posição no vetor
    while(num > 0){
        qtd_dig++;
        num /= 10;
    }

    //printf("qtd %d\n", qtd_dig);
    num = n;
    int idx_v=0;
    // alocar os numeros na ordem correta
    while(num > 0){
        int digito = num%10;
        v[(qtd_dig-1)-idx_v] = digito;
        num = num/10;
        idx_v++;
    }
    v[idx_v] = -1;    
}

int eh_palindromo(int v[]){
    int len_v = 0;
    int pos = 0;
    
    // agora faz sentido ter -1 no fim do vetor. Um sinalizador para posibilitar a contagem de elementos
    while(v[pos]!=-1){
        len_v++;
        pos++;
    }

     /* sabendo quantos elemento tem em v, itero sobre eles e verifico se é Palindromo
     A lógica do padrão de um palindromo é simples: o elemento inicial deve ser igual ao ultimo, o segundo
     elemento deve ser igual ao penultimo, e assim até o ponto de simetria (meio do vetor) */

    int eh_palindro = 1;

    for(int i=0; i <= (len_v/2); i++){ // O ponto de simetria a ser validado é exatamente len_v / 2
        if(v[i]!=v[(len_v-1)-i]){
            eh_palindro = 0;
        }
    }
    return eh_palindro;    
}


int maior_palindromo(int m, int fatores[2]){
    /* o processo seria, para cada par de produtos AxB, verificar se o numero resultante é eh_palindromo
    Se busco o maior palindromo possível é mais eficiente começar pelos maiores numeros (e produtos) possíveis
    m -> 25 (25*25), (25*24),...,(24*24),(24*23),...(1*1). */

    int vet[100];
    int produto = 0;
    int ultimo_palindromo = 0;
    for(int a=m; a>0; a--){
        for(int b=a; b>0; b--){
            produto = a*b;
            converte_numero_para_vetor_de_digitos(produto, vet);
            int palindromo = eh_palindromo(vet);
            if(palindromo==1){
                if(produto > ultimo_palindromo){
                    fatores[0] = a;
                    fatores[1] = b;
                    ultimo_palindromo = produto;
                }
            }
        }
    }
    printf("a:%d b:%d\n",fatores[0],fatores[1]);
    return ultimo_palindromo;
}


int main(){

    int vet[2];
    printf("here %d",maior_palindromo(25,vet));

}