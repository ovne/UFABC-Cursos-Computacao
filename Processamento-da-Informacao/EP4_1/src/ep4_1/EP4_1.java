/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ep4_1;

/*Escreva um programa para ler um vetor de inteiros com n elementos. 
O valor n deve ser fornecido em tempo de execução. Retorne o maior elemento do vetor.
 */

import java.util.Scanner;

/**
 *
 * @author olive
 */
public class EP4_1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] vetor = new int[n];
        for(int i=0; i < n; i++)vetor[i] = input.nextInt();
        
        int major = vetor[0];
        for(int i:vetor){
            if(i >major)major = i;
        }
        System.out.println(major);
    }
}
