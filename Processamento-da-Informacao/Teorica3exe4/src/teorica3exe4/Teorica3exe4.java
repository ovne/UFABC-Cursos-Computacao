/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package teorica3exe4;

import java.util.Random;

public class Teorica3exe4 {
    
    public static void print(int[][]mat){
        //metodo so para imprimir
        for (int[] mat1 : mat) {
            for (int j = 0; j< mat1.length; j++) {
                System.out.printf("%4d",mat1[j]);
            }
            System.out.println();
        }
    }

    public static void main(String[] args){
        
        // declarando as matrizes..
        int[][] mat = new int[4][4];
        int[][] hFold = new int[4][2];
        int[][] vFold = new int[2][2];
        
        // alocando matriz principal com aleatorios
        for(int[]mat1 : mat){
            for(int i=0; i< mat1.length; i++){
                mat1[i] = new Random().nextInt(50);
            }
        }
        System.out.println("---Matriz---");
        //primeira dobra, dobra horizontal
        int k = mat.length;
        for(int i=0; i < k ; i++){
            for(int j=0; j < (k/2); j++){
                hFold[i][j] = (mat[i][j] + mat[i][(k-1)-j]);
            }
        }
        //Segunda dobra, dobra vertical
        for(int i=0; i<k/2; i++){
            for(int j=0; j<k/2; j++){
                vFold[i][j] = hFold[i][j] + hFold[(k-1)-i][j];
            }
        }
        print(mat);
        System.out.println("---Dobra Horizontal---");
        print(hFold);
        System.out.println("---Dobra Vertical---");
        print(vFold);
    }
}
