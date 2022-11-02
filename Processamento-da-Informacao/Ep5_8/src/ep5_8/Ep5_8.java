/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ep5_8;

/*Escreva um programa que leia duas matrizes: A e B. Depois mostre o resultado 
da seguinte operação: 3 x A x B.

Entrada:
Número de linhas da matriz A
Número de colunas da matriz A
Número de linhas da matriz B
Número de colunas da matriz B
Dados da matriz A
Dados da matriz B

Saída:
Matriz resultado da operação 3 x A x B, isto é, o escalar 3 que multiplica a matriz AxB. */

import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Ep5_8 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        //entradas
        int al = input.nextInt();
        int ac = input.nextInt();
        int bl = input.nextInt();
        int bc = input.nextInt();
        
        //declarando matrizes
        int[][] matA = new int[al][ac];
        int[][] matB = new int[bl][bc];
        int[][] axb = new int [al][ac];
        int[][] triAB = new int[al][ac];
        
        //alocando em matA e matB
        for(int[]mat1 : matA){
            for(int i=0; i < mat1.length; i++){
                mat1[i] = input.nextInt();
            }
        }
        for(int[] mat2 : matB){
            for(int i=0; i < mat2.length; i++){
                mat2[i] = input.nextInt();
            }
        }
        
        //transpondo matB
        for(int i=0; i < matB.length; i++){
            for(int j =i+1; j < matB[i].length; j++){
                int aux = matB[i][j];
                matB[i][j] = matB[j][i];
                matB[j][i] = aux;
            }
        }
        
        //produto matricial AB
        for(int i=0; i < al; i++){
            for(int j =0; j < ac; j++){
                int sumProd =0;
                for(int k=0; k < al; k++){
                    sumProd += matA[i][k] * matB[j][k];
                }
            axb[i][j] = sumProd;    
            }
        }
        
        //produto escalar atriz
        for(int i=0; i < axb.length; i++){
            for(int j=0; j < axb[i].length; j++){
                triAB[i][j] = 3 * axb[i][j];
            }
        }
        //mostrando matriz
        for (int[] mat1 : triAB) {
            for (int j = 0; j< mat1.length; j++) {
                System.out.printf("%4d",mat1[j]);
            }
            System.out.println();
        }
        
    }
    
}
