/* Desenvolva uma função recursiva para converter um número natural em base decimal para base 
binária. O número retornado pela função deve ser um número inteiro em que os dígitos 0 e 1 são 
usados para representar o número binário. 
Por exemplo, 
    para o número 14, 
    a função deve retornar 1110. 
    Para o número 7,
    a função deve retornar 111. */


#include<stdio.h>
//#include "dec2bin.h"

int dec2bin(int n_decimal) {
    //BASE: se decimal for 2, então 2/2 = 1 2%2 = 0 devo retornar 10
    if(n_decimal==0){
        return 0;
    }else{
        return (n_decimal%2) + dec2bin(n_decimal/2)*10;
    } 
    
}

int main(){
    int dec = 7;
    printf("%d\n", dec2bin(dec));
}