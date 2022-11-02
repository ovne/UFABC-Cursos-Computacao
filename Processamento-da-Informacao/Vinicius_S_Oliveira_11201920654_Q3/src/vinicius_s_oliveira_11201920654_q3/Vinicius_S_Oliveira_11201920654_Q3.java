/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package vinicius_s_oliveira_11201920654_q3;

import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Vinicius_S_Oliveira_11201920654_Q3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //declarando coisa uteis
        Scanner input = new Scanner(System.in);
        System.out.println("Entre com o tamanho do seu vetor: ");
        int n = input.nextInt();
        int[] vet = new int[n];
        
        //alocando no vetor
        System.out.println("Entre com os elementos 1 por vez:");
        for(int i =0; i < vet.length; i++) {
            vet[i] = input.nextInt();
        }
        
        //escondendo os impares a partir de metodo
        hideOdds(vet);
        
        // por fim imprimindo o vetor
        for(int i : vet) System.out.print(i+" ");
        
    }
    public static void hideOdds(int[] vet) {
        for(int i=0; i < vet.length; i++) {
            if(vet[i] % 2 != 0) vet[i] = i;
        }
    }
    
}
