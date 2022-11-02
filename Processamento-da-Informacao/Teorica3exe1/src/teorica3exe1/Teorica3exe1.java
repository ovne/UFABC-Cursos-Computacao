/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package teorica3exe1;

import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Teorica3exe1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int [][] mat = new int[3][3];
        int par =0;
        int impar =0;
        // alocando elementos na matriz
        for (int[] mat1 : mat) {
            for (int j = 0; j < mat1.length; j++) {
                mat1[j] = input.nextInt();
                if (mat1[j] % 2 == 0) {
                    par++;
                } else {
                    impar++;
                }
            }
        }
        //imprimindo a matriz e nº de pares e impares...
        System.out.println("--------");
        for (int[] mat1 : mat) {
            for (int j = 0; j < mat1.length; j++) {
                System.out.print(mat1[j] + " ");
            }
            System.out.println();
        }
        System.out.println("Nºs Pares: "+par);
        System.out.println("Nºs Ímpares: "+impar);
    }
}
