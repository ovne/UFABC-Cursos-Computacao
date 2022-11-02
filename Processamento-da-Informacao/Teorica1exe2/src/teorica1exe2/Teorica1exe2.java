/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package teorica1exe2;

import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Teorica1exe2 {
    /* => Ler e imprimir um vetor de 20 numeros inteiros
       => mostrar quantos nº pares ha no vetor 
    */

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num[] = new int[20], i,j,pares;
        
        //lendo os elementos do vetor
        for(i=0; i<num.length; i++){
            System.out.println("Entre com um número:");
            num[i] = input.nextInt();
        }
        //contando nº pares
        pares = 0;
        for(j=0 ; j<num.length;j++){
            if(num[j]%2 == 0)pares++;
        }
        System.out.println(Arrays.toString(num));
        System.out.println("Ha "+pares+" numeros pares nessa sequencia.");
    }
}
