/* Considere o superfatorial de um número N como o produto dos N primeiros fatoriais de N. 
Assim, o superfatorial de 4 é:

superfatorial(4) = 1! * 2! * 3! * 4! = 288

Faça uma função recursiva que receba um número inteiro positivo N e retorne o superfatorial 
desse número. */

#include <stdio.h>
//#include "superfatorial.h"

long superfatorial(int n) {
    //BASE: se n==1 retorna 1, se nao, para cada n calculo o fatorial na forma iterativa.
    //RECURSAO: o valor fotorial do n atual multiplicado pela recursão com n-1
    
    int fat = 1;
    if(n==0)return 1;
    else{   
        for(int i = 1; i <= n; i++){
            fat = fat * i;
        }
    }
    return fat * superfatorial(n-1);
}


int main(){
    printf("%ld",superfatorial(4));
}