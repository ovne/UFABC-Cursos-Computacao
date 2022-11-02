/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package teorica4exe1;

import java.util.Random;
import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Teorica4exe1 {
    
    public static void main(String[] args) {
        //declarando coisas uteis;
        Scanner input = new Scanner(System.in);
        System.out.println("Entre com a dimensão da matriz: (LxL)");
        int n = input.nextInt();
        int[][] mat = new int[n][n];
        
        //chamando os métodos
        setMat(mat);
        print(mat);
    }
    
    
    private static void setMat(int[][] mat) {
        /* por praticidade e como parece ser indiferente, alterei o metodo para
    preencher Mat com nºs randomicos.
    */
        for(int i=1; i < (mat.length -1); i++){
            for(int j=1; j < (mat[i].length -1); j++){
                mat[i][j] = new Random().nextInt(50);
            }
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
