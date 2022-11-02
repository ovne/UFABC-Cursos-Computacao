/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ep5_2;

/*Escreva um programa que leia uma matriz com n x n. Depois some todos os 
elementos da diagonal principal.

Entrada:
n
Dados da matriz */

import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Ep5_2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int n = input.nextInt();
        int[][] mat = new int[n][n];
        
        for(int[] mat1 : mat){
            for(int i=0; i < mat1.length; i++){
                mat1[i] = input.nextInt();
            }
        }
        
        int aux = 0;
        for(int i=0; i < mat.length; i++){
            for(int j=0; j < mat[i].length; j++){
                if(i < j){
                    aux += mat[i][j];
                }
            }
        }
        System.out.println(aux);
    }

    private static void setMat(int[][] mat) {
        Scanner input = new Scanner(System.in);
        for(int[] mat1 : mat){
            for(int i=0; i < mat1.length; i++){
                mat1[i] = input.nextInt();
            }
        }
    }

    private static int diagonalSum(int[][] mat) {
        int aux = 0;
        for(int i=0; i < mat.length; i++){
            for(int j=0; j < mat[i].length; j++){
                if(i == j){
                    aux += mat[i][j];
                }
            }
    }
    return aux;
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

    private static int aboveDiagonal(int[][] mat) {
        //Essa metodo foi criado para fins do Ep5_3..
        int aux = 0;
        for(int i=0; i < mat.length; i++){
            for(int j=0; j < mat[i].length; j++){
                if(i < j){
                    aux += mat[i][j];
                }
            }
        }
        return aux;
    }
}
