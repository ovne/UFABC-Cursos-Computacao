/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package vinicius_s_oliveira.pkg11201920654.q1;

import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Vinicius_S_Oliveira11201920654Q1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //Declarando coisas uteis
        Scanner input = new Scanner(System.in);
        System.out.println("Entre com a tamanho do seu vetor: ");
        int n = input.nextInt();
        int[] vet = new int[n];
        int[] copyVet = new int[n];
        
        //alocando valores no vetor
        System.out.println("Entre com os elementos 1 por vez:");
        for(int i =0; i < vet.length; i++) {
            vet[i] = input.nextInt();
        }
        //imprimindo vetor a partir do metodo
        System.out.println();
        printVet(vet);
        System.out.println();
        System.out.println("======================");
        
        //copiando o vetor a partir do metodo para então altera-lo:
        brutalForceCopy(vet, copyVet);
        
        //Trocando posições do maior e menor no vetor copia
        copyVet[minor(vet)] = vet[major(vet)];
        copyVet[major(vet)] = vet[minor(vet)];
        
        //imprimindo vetor alterado
        printVet(copyVet);
        
        
    }
    
    public static void printVet(int[] vet) {
        for(int i : vet) {
            System.out.print(i + " ");
        }
    }
    
    public static int major(int[] vet){
        //esse metodo retorna o indice do maior elemento
        int indexMajor = 0;
        for(int i =1; i < vet.length; i ++){
            if(vet[i] > vet[indexMajor])indexMajor = i;
        }
        return indexMajor;
    }
    
    public static int minor(int[] vet) {
        //esse metodo retorna o indice do menor elemento
        int indexMinor =0;
        for(int i =1; i < vet.length; i++) {
            if(vet[i] < vet[indexMinor])indexMinor = i;
        }
        return indexMinor;
    }
    
    public static void brutalForceCopy(int[] vet, int[] copyVet) {
        for(int i =0; i < vet.length; i++) {
            copyVet[i] = vet[i];
        }
    }
    
}
