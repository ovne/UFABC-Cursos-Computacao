/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package teorica2exe2;

import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Teorica2exe2 {
    public static int checkIn(int[]vetor, int n){
        for(int i=0; i<vetor.length; i++){
            if(n == vetor[i]){
                System.out.print("Presente na posição: ");return i;
            }
        }
        return -1;}
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int[] vetor = {2,3,8,14,25,98,369,7};
        System.out.println("Nº a ser buscado:");
        int n = input.nextInt();
        System.out.println(checkIn(vetor,n));
    }
}
