/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package vinicius_s_oliveira_11201920654_q4;

import java.util.Arrays;
import java.util.Random;
import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Vinicius_S_Oliveira_11201920654_Q4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       //declarando coisa uteis
        Scanner input = new Scanner(System.in);
        System.out.println("Entre com nº de linha da matriz");
        int m = input.nextInt();
        System.out.println("Entre com nº de colunas da matriz");
        int n = input.nextInt();
        System.out.println("Entre com nº que queira buscar na matriz (entre 0 e 20):");
        int x = input.nextInt();
        
        int[][] mat = new int[m][n];
        
        System.out.println(searchInMat(mat,m,n,x));
    }
    
    public static String searchInMat(int[][] mat, int m, int n, int x){
        /* Preenchendo com numeros aleatorios mas apenas pensando na situação que
        o usuario que busca um numero na matriz não for o mesmo que insere os dados
        */
        for(int i =0; i < m; i++){
            for(int j =0; j < n; j++){
                mat[i][j] = new Random().nextInt(20);
            }
        }
        
        
        for(int[] mat1 : mat){
            for(int i=0; i < mat1.length; i++){
                System.out.printf("%4d", mat1[i]);
            }
            System.out.println();
        }
        
        //verificando se contem o numero buscado
        int[] pos = new int[2];
        for(int i =0; i < m; i++){
            for(int j =0; j < n; j++){
                if(mat[i][j] == x){
                    pos[0] = i;
                    pos[1] = j;
                    return Arrays.toString(pos);
                }
            }
        }
        return "-1";
    }
}
