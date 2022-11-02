/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ep4_8;

/*Escreva um programa que leia um vetor de inteiros com n elementos. Depois 
verifique se o vetor está ordenado em ordem crescente.

Entrada:
Um valor n (0 <= n <= 50);
n inteiros

Saída:
Imprima "SIM" se o vetor estiver ordenado e "NAO" caso contrário */

import java.util.Arrays;
import java.util.Random;
import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Ep4_8 {
    
   public static boolean checkSort(int[] vet){
       // copiando vetor para operar
       int[] aux = new int[vet.length];
       System.arraycopy(vet, 0, aux, 0, vet.length);
       //ordenando com metodo interno..
       Arrays.sort(aux);
       //verificando se original é igual ao ordenado:
       return Arrays.equals(aux, vet);
   }
        
    public static void main(String[] args) {
        //declarando coisas uteis..
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] vet = new int[n];
        
        //alocando no vetor a ser vereficado:
        for(int i=0; i<n; i++)vet[i] = input.nextInt();
        
        if(checkSort(vet))System.out.println("SIM");
        else System.out.println("NAO");
    }
}
