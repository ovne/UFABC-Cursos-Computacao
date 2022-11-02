/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package vinicius_s_oliveira_11201920654_q5;

import java.util.Random;
import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Vinicius_S_Oliveira_11201920654_Q5 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //declarando coisa uteis
        Scanner input = new Scanner(System.in);
        System.out.println("Entre com a dimensão da matriz: LxL");
        int n = input.nextInt();
        
        int[][] mat = new int[n][n];
        //preenchendo com numeros aleatorios
        System.out.println("Entre com os elementos da matriz: ");
        for(int i=0; i < n; i++){
            for(int j=0; j < n ; j++) {
                //mat[i][j] = new Random().nextInt(9)+1;
                mat[i][j] = input.nextInt();
            }
        }
        System.out.println();
        
        //imprimindo a partir de metodo
        specialPrint(mat);
    }
    
    public static void specialPrint(int[][] mat) {
        int aux = mat.length;
        for(int k=0; k <= aux + 1; k++){
            for(int i =0; i <= k; i++){
                for(int j =0; j <= k; j++){
                    if(i < aux && j < aux){
                        if(i + j == k)System.out.print(mat[i][j] + " ");
                    }
                }
            }
        }
    }
}
