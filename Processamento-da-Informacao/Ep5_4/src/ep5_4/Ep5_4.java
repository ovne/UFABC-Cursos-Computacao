/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ep5_4;

/*Escreva um programa que leia uma matriz com n linhas e m colunas. Após isso, 
ordene os elementos em cada linha (ordem crescente). Importante: não utilize
funções prontas da linguagem para ordenação! Escreva o seu algoritmo de ordenação.
*/

import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Ep5_4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int l = input.nextInt();
        int c = input.nextInt();
        
        int[][] mat = new int[l][c];
        //alocando na matriz
        for(int[] mat1 : mat){
            for(int i=0; i < mat1.length; i++){
                mat1[i] = input.nextInt();
            }
        }
        //Passando o algoritimo BubbleSort em cada vetor(linha) da matriz:
        for(int[]mat1 : mat){
            int k = mat1.length;
            int aux;
            for(int i=0; i<k; i++){
                for(int j=0; j < (k-1); j++){
                if(mat1[j] > mat1[j+1]){
                    aux = mat1[j];
                    mat1[j] = mat1[j+1];
                    mat1[j+1] = aux;
                    }
                }
            }
        }
        // imprimindo
        for (int[] mat1 : mat) {
            for (int j = 0; j< mat1.length; j++) {
                System.out.printf("%4d",mat1[j]);
            }
            System.out.println();
        }
    }
    
    
    private static void setMat(int[][] mat) {
        Scanner input = new Scanner(System.in);
        for(int[] mat1 : mat){
            for(int i=0; i < mat1.length; i++){
                mat1[i] = input.nextInt();
            }
        }
    }
    
    public static void print(int[][]mat){
        //metodo so para imprimir
        for (int[] mat1 : mat) {
            for (int j = 0; j< mat1.length; j++) {
                System.out.printf("%4d",mat1[j]);
            }
            System.out.println();
        }
    }
    
}
