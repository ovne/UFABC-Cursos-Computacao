/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package teorica4exe2;

import java.util.Arrays;
import java.util.Random;

/**
 *
 * @author olive
 */
public class Teorica4exe2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //declarando matriz
        int [][][] mat = new int[5][7][3];
        //chamando matriz
        setMat(mat);
        print(mat);
    }
    
    public static void setMat(int [][][] mat){
        //metodo para alocar valores aleatorios na matriz
        for(int [][] mat1 : mat){
            for(int[] mat2 : mat1){
                for(int i=0; i < mat2.length; i++){
                    mat2[i] = new Random().nextInt(50);
                }
            }
        }
    }
    
    public static void print(int[][][] mat){
        for(int k=0; k < 3; k++){
            System.out.println("K = "+k);
            for(int i=0; i < 5; i++){
                System.out.print("|");
                for(int j=0; j < 7; j++){
                    System.out.printf("%4d",mat[i][j][k]);
                }
                System.out.print(" |");
                System.out.println();
            }
        }
    }
    
}
