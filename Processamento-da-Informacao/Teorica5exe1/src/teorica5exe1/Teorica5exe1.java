/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package teorica5exe1;

import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Teorica5exe1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Entre com o tamanho da sequencia:");
        int n = input.nextInt();
        int[] vet = new int[n];
        for(int i=0; i < vet.length; i++)vet[i] = input.nextInt();
        
        System.out.println("Sua Sequencia foi:");
        System.out.println(Arrays.toString(vet));
        System.out.println("A maior sequencia de elementos iguais foi de:");
        System.out.println(seqlength(vet));
    }
    
    public static int seqlength(int[] vet) {
         
    }
    
}
