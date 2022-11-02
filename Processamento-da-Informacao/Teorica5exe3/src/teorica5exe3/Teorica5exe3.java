/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package teorica5exe3;

import java.util.Random;
import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Teorica5exe3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //declarando matriz a partir de entrada:
        Scanner input = new Scanner(System.in);
        System.out.println("Entre com as dimensão da matriz LxL: ");
        int n = input.nextInt();
        int[][] mat = new int[n][n];
        // alocando na matriz com random values
        for(int i=0; i < mat.length; i++){
            for(int j=0; j < mat[i].length; j++){
                mat[i][j] = new Random().nextInt(20);
            }
        }
        //imprimindo com metodo
        print(mat);
        //imprimindo a somas dos numerodas nas diagonais:
        System.out.println(calcXmat(mat));
    }
    
    public static int calcXmat(int[][] mat) {
        int k = mat.length - 1;
        int bowl =0;
        for(int i=0; i < mat.length; i++) {
            for(int j=0; j < mat[i].length; j++) {
                if(i == j || (i + j) == k){
                    bowl += mat[i][j];
                }
            }
        }
        return bowl;
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
