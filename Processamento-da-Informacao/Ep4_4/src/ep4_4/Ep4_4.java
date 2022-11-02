/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ep4_4;

/*Escreva um programa que leia um vetor v1 de inteiros com n elementos com 
valores de 0 até 9. Criar uma função para retornar um outro vetor v2, onde os 
elementos recebam a quantidade de ocorrências dos valores de 0 a 9, armazenando 
nas posições 0 a 9 de v2.

Entrada:
Um valor n (0 <= n <= 50);
n inteiros. */

import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Ep4_4 {

    public static int[] freq(int[] vetor){
        int[] freq = new int[10];
        Arrays.fill(freq, 0);
        
        for(int i=0; i<10; i++){
            for(int j=0; j<vetor.length; j++){
                if(i == vetor[j]){
                    freq[i] += 1;
                }
            }
        }
        return freq;
    }
    public static void main(String[] args) {
        //declarando vetor a partir de entrada
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] vetor = new int[n];
        //preenchendo vetot
        for(int i=0; i<n; i++)vetor[i] = input.nextInt();
        //chamando e imprimindo metodo de frequencia
        System.out.println(Arrays.toString(freq(vetor)));
    }
}
