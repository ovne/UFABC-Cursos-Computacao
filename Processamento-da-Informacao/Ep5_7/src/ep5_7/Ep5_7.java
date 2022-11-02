/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ep5_7;

/*Escreva um programa que leia um valor n e então imprima uma matriz de tamanho
n x n de acordo com o exemplo a seguir (veja que os números seguem uma ordem):

Para n = 5:

1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9

Entrada:
n (inteiro) */

import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Ep5_7 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[][] mat = new int[n][n];
        
        for(int i=0; i < n; i++){
            for(int j =0; j < n; j++){
                mat[i][j] = i + j + 1;
            }
        }
        
        for(int[] mat1 : mat){
            for(int i=0; i < mat1.length; i++) {
                System.out.printf("%4d",mat1[i]);
            }
            System.out.println();
        }
        
    }
    
}
