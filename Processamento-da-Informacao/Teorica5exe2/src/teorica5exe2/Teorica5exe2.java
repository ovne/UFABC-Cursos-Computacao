/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package teorica5exe2;

import java.util.Arrays;
import java.util.Random;

/**
 *
 * @author olive
 */
public class Teorica5exe2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //declarando vetores
        int[] a = new int[12];
        int[] b = new int[12];
        //alocando numeores aleatorios nos vetores
        for(int i =0; i < a.length; i++)a[i] = new Random().nextInt(20);
        for(int i =0; i < b.length; i++)b[i] = new Random().nextInt(20);
        
        System.out.println(Arrays.toString(a));
        System.out.println(Arrays.toString(b));
        
        // declarando matriz
        int[][] mat = new int[12][3];
        /* Alocando na matris com a primeira operação:
        -> Colunas 0 recebe a soma dos elementos de a e b.
        */
        for(int i=0; i < mat.length; i++){
            for(int j =0; j < mat[i].length; j++){
                mat[i][0] = a[i] + b[i];
            }
        }
        
        // -> Coluna 1 deve conter elementos de b * 5:
        for(int i =0; i < mat.length; i++) {
            for(int j =0; j < mat[i].length; j++){
                mat[i][1] = b[i] * 5;
            }
        }
        
        //-> por fim coluna 2 deve conter os elementos de a na ordem inversa
        int k = a.length -1 ;
        for(int i=0; i < mat.length; i++){
            mat[i][2] = a[k];
            k--;
        }
        // imprimindo a matriz
        System.out.println("=====================");
        print(mat);
        
    }
    
    public static void print(int[][]mat){
        //metodo só para imprimir matriz
        for (int[] mat1 : mat) {
            for (int j = 0; j< mat1.length; j++) {
                System.out.printf("%4d",mat1[j]);
            }
            System.out.println();
        }
    }
    
}
