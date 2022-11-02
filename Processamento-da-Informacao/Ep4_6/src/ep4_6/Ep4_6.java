/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ep4_6;

/*Escreva um programa que leia um vetor de inteiros com n elementos. Depois 
ordene todos os elementos em ordem crescente. Importante: não utilize funções 
prontas da linguagem para ordenação! Escreva o seu algoritmo de ordenação.

Entrada:
Um valor n (0 <= n <= 50);
n inteiros
Saída:
Vetor ordenado (ordem crescente). */

import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Ep4_6 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] vet = new int[n];
        //alocando no vetor a ser ordenado
        for(int i=0; i<n; i++){
            vet[i] = input.nextInt();
        }
        System.out.println(Arrays.toString(sorted(vet)));
    }

    private static int[] sorted(int[] vet) {
        // ordenando com algoritimo BubbleSort
        int k = vet.length;
        int aux;
        for(int i=0; i<k; i++){
            for(int j=0; j < (k-1); j++){
                if(vet[j] > vet[j+1]){
                    aux = vet[j];
                    vet[j] = vet[j+1];
                    vet[j+1] = aux;
                }
            }
        }
        return vet;
    }
}
