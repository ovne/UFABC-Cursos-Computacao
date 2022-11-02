/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package vinicius_s_oliveira_11201920654_q2;

import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Vinicius_S_Oliveira_11201920654_Q2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //declarando coisa uteis
        Scanner input = new Scanner(System.in);
        System.out.println("Entre com o tamanho do Array a ser veridicado: ");
        int n = input.nextInt();
        int[] vet = new int[n];
        int[] copyVet =  new int[vet.length];
        
        //alocando no vetor
        System.out.println("Entre com os elementos 1 por vez:");
        for(int i =0; i < vet.length; i++) {
            vet[i] = input.nextInt();
        }
        printVet(vet);
        
        //copiar o vetor para ser ordenado e comparado
        brutalForceCopy(vet, copyVet);
        
        //verificando se esta ordenado a partir de metedo
        if(checkSort(vet, copyVet))System.out.println("VERDADEIRO");
        else System.out.println("FALSO");
    }
    
    public static boolean checkSort(int[]vet, int[] copyVet) {
        /* esse metodo ordena o vetor cópia com o algoritimo BubbleSort e
        depois compara com o vetor inicial
        */
        int k = copyVet.length;
        int aux;
        for(int i=0; i<k; i++){
            for(int j=0; j < (k-1); j++){
                if(copyVet[j] < copyVet[j+1]){
                    aux = copyVet[j];
                    copyVet[j] = copyVet[j+1];
                    copyVet[j+1] = aux;
                }
            }
        }
        // verificando se o vetor ordenado confere com o original
        boolean checkSort = true;
        for(int i =0; i < k; i++) {
            if(vet[i] != copyVet[i])checkSort = false;
        }
        return checkSort;
    }
    
    public static void brutalForceCopy(int[] vet, int[] copyVet) {
        for(int i =0; i < vet.length; i++) {
            copyVet[i] = vet[i];
        }
    }
    
    public static void printVet(int[] vet) {
        for(int i : vet) {
            System.out.print(i + " ");
        }
    }
    
}
