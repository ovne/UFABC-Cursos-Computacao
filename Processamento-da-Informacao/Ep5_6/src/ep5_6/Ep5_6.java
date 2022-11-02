/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ep5_6;

/*Escreva um programa que leia uma matriz com n x n (assuma que n é par). 
Após isso, imprima o resultado da matriz dobrada da seguinte forma: */

import java.util.Random;
import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Ep5_6 {

    /**
     * @param args the command line arguments
     */
    
    
    //O exercicio de "dobrar" matrizes
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        
        int[][] mat = new int[n][n];
        int[][] hfold = new int[n][n/2];
        int[][] vfold = new int[n/2][n/2];
        
        //alocando na matriz principal
        for(int[] mat1 : mat){
            for(int i=0; i < mat1.length; i++){
                mat1[i] = input.nextInt();
            }
        }
        //dobra horizontal
        int k = mat.length;
        for(int i=0; i < k; i++){
            for(int j=0; j < (k/2); j++){
                hfold[i][j] = mat[i][j] + mat[i][(k-1)-j];
            }
        }
        //dobra vertical
        for(int i=0; i < (k/2); i++){
            for(int j=0; j < (k/2); j++){
                vfold[i][j] = hfold[i][j] + hfold[(k-1)-i][j];
            }
        }
        //inprimindo a bagaça
        for(int[] mat1 : vfold){
            for(int i =0; i < mat1.length; i++){
                System.out.println(mat1[i]);
            }
            System.out.println();
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
