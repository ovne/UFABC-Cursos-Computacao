/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ep4_7;

/*Escreva um programa que leia um vetor de inteiros com n elementos. Depois 
verifique se o vetor é "espelhado", ou seja, a primeira metade é igual ao 
inverso da segunda. Por exemplo, os vetores a seguir são "espelhados": 
[5 9 7 8 8 7 9 5], [1 2 3 2 1], mas o vetor [1 2 3 4 5] não é.

Entrada:
Um valor n (0 <= n <= 50);
n inteiros
Saída:
Imprima "SIM" se o vetor for "espelhado" e "NAO" caso contrário  */

import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Ep4_7 {

    public static boolean palindromo(int [] vet){
        int k = vet.length;
        int[] aux = new int[k];
        System.arraycopy(vet, 0, aux, 0, k);
        
        for(int i = k-1; i >=0; i--){
            if(aux[i] != vet[(k-1)-i]) return false;
        }
        return true;
    }
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] vet = new int[n];
        for(int i=0; i<n; i++){
            vet[i] = input.nextInt();
        }
        if(palindromo(vet))System.out.println("SIM");
        else System.out.println("NAO");
    }
    
}
