/*
Prática: Escrever um programa que calcule uma aproximação de PI pela série matemática conhecida
como Série de Gregory

    PI/4 = 1/1 + 1/3 - 1/5 + 1/7 - 1/9 ... + 1/n - 1/(n+2)
*/


#include <stdio.h>


double calc_pi(int n){
    double pi = 0.0;
    int posicao = 0; 
    for(int i=1; i <= n; i+=2){
        if(posicao % 2 == 0){
            pi += 1.0/i;
        }
        else{
            pi -= 1.0/i;
        }
        posicao++;
    }
    return pi*4;
}

double calc_pi_slim_version(int n ){
    double soma = 0.0;
    for(int i=0; i <= n; i++){
        soma += (i%2==0 ? 1 : -1) * (1.0/(1 + 2*i));
    }
    return soma*4;
}

int main(){
    double my_pi = calc_pi(1000000);
    printf("O valor da aproximacao de PI eh: %lf\n", my_pi);
    double my_other_pi = calc_pi_slim_version(100000000);
    printf("O valor da aproximacao de PI eh: %lf\n", my_other_pi);
}

/*
OBSERVAÇÔES:
-é possível notar que apesar do segundo método ter um código mais enxuto ele resulta num valor menos
preciso se comparado ao outro método.
- E isso ocorre mesmo para um número muito maior de iterações.
- Esse é um caso interessante para análise de complexidade  
*/