/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package teorica3exe3;

import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Teorica3exe3 {
    
    public static void print(int[][]mat){
        //metodo so para imprimir
        for (int[] mat1 : mat) {
            for (int j = 0; j< mat.length; j++) {
                System.out.printf("%4d",mat1[j]);
            }
            System.out.println();
        }
    }
    
    public static int majorInline(int[][] mat, int i){
        // metodo para retornar o maior na linha definida
        int ref = mat[i][0];
        for(int k: mat[i]){
            if(k>ref)ref = k;
        }
        return ref;
    }
    
    public static int[] vetMjs(int[][]mat ,int[] majors){
        //metodo para alocar o maior de cada linha no vetor
        for(int i=0; i < majors.length; i++){
            majors[i] = majorInline(mat,i);
        }
        return majors;
    }
    
    public static int minorIncolumn(int[][] mat, int i){
        //metodo retorna o menor valor da coluna definida
        int ref = mat[0][i];
        for(int k=0; k< mat.length; k++){
            if(mat[k][i] < ref)ref = mat[k][i];
            }
        return ref;
    }
    
    public static int[] vetMns(int[][] mat, int[]minors){
        for(int i=0; i< minors.length; i++){
            minors[i] = minorIncolumn(mat,i);
        }
        return minors;
    }
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        //instanciando vetores...
        int[][] mat = new int[5][5];
        int[] majors = new int[5];
        int[] minors = new int[5];
        
        //alocando valores na matriz
        for(int[]mat1 : mat){
            for(int i=0; i<mat1.length;i++){
                mat1[i] = input.nextInt();
            }
        }
        System.out.println("-----------------");
        System.out.println("Matriz:");
        print(mat);
        System.out.println("Maiores elementos de cada linha: ");
        System.out.println(Arrays.toString(vetMjs(mat,majors)));
        System.out.println("Menores elementos de cada coluna: ");
        System.out.println(Arrays.toString(vetMns(mat, minors)));
    }
    
}
