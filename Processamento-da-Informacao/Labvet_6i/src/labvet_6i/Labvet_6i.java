package labvet_6i;

import java.util.Arrays;
import java.util.Scanner;

/*Faça um programa que leia um valor inteiro N e então mostre os N primeiros 
números primos (o primeiro número primo é o 2).

Entrada:
Valor inteiro N. */

public class Labvet_6i {
    static boolean checkPrime(int n, int vetor[]){
        for (int primo : vetor)
            if (n % primo == 0){
	        return false;
	      }
    return true;
    }
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
	int n = input.nextInt();
	
        int i = 1, k = 2;
	int primes[] = new int[n];
	Arrays.fill(primes, 2);

	while (i != n){ 
	      if(checkPrime(k, primes)){
	        primes[i] = k;
	        i++;
	      }
	      k++;
	    }
	    for(int j =0; j<primes.length; j++){
                System.out.println(primes[j]);
            }
	  }
}
