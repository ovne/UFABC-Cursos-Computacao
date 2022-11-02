/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package teorica3exe2;

import java.util.Random;

/**
 *
 * @author olive
 */
public class Teorica3exe2 {
    public static void print(int[][]mat){
        //metodo so para imprimir
        for (int[] mat1 : mat) {
            for (int j = 0; j< mat.length; j++) {
                System.out.printf("%4d",mat1[j]);
            }
            System.out.println();
        }
    }
    
    public static void indexMajor(int [][]mat){
        //metodo para verificar maior e imprimir posição
        int ref = mat[0][0];
        int line =0;
        int column =0;
        for(int i=0; i< mat.length; i++){
            for(int j=0; j <mat.length; j++){
                if(mat[i][j] > ref){
                    ref = mat[i][j];
                    line = i;
                    column = j;
                }
            }
        }
        System.out.println("Maior valor da matriz: "+ref);
        System.out.println("Posição do maior: ("+line+","+column+")");
    }
    
    public static void majorInline(int[][] mat){
        // metodo para imprimir o maior na linha definida
        int ref = mat[4][0];
        for(int i: mat[4]){
            if(i>ref)ref = i;
        }
        System.out.println("O maior valor na linha 5 é: "+ref);
    }
    
    public static void minorIncolumn(int[][] mat){
        //metodo imprime o menor valor da coluna definida
        int ref = mat[0][6];
        for(int i=0; i< mat.length; i++){
            if(mat[i][6] < ref)ref = mat[i][6];
            }
        System.out.println("O menor valor na coluna 7 é: "+ref);
    }
    
    public static void main(String[] args) {
        //instanciando novo objeto do tipo Random..
        Random generator = new Random();
        
        //instanciando matriz 10x10
        int [][] mat = new int[10][10];
        
        // alocando nºs pseudoaleatorios na matriz
        for(int i=0; i <10; i++){
            for(int j=0; j <10; j++){
                mat[i][j] = generator.nextInt(100);
            }
        }
        System.out.println("------------");
        print(mat);
        System.out.println("------------");
        indexMajor(mat);
        System.out.println("------------");
        majorInline(mat);
        System.out.println("------------");
        minorIncolumn(mat);
    }
}
