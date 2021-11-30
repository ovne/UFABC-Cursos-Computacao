/* Desenvolva uma função recursiva contafreq que recebe dois números naturais e indique a 
frequência com que o segundo número aparece no primeiro. O segundo número sempre será menor
do que 10.

Por exemplo, contafreq(12343, 3) = 2. */

#include<stdio.h>

int contafreq(int num, int digito) {
    //BASE: num ser igual a 0. Retorna 0 se digito nao for 0 e 1 caso seja;
    //RECURSAO: decomponho o numero em suas unidades e valido se esse digito é o buscado
    if(num==0){
        return (digito == 0) ? 1 : 0;
    }else{
        if(num%10==digito){
            return 1 + contafreq(num/10, digito);
        }else{
            return 0 + contafreq(num/10, digito);
        }
    }
}


int main(){
     int num = 1234003333;
     printf("%d", contafreq(num,0));
}