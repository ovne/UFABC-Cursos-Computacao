/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package teorica1exe4;

import java.util.Arrays;
import java.util.Random;

/**
 *
 * @author Vinícius S. Oliveira
 */
public class Teorica1exe4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // Declarando e prenchendo vetor de nºs pseudorandomicos
        int randomValues[] = new int[8];
        int operated[] = new int[randomValues.length/2];
        
        int aux = randomValues.length;
        for(int i=0; i< aux; i++){
            randomValues[i] = new Random().nextInt(100);
        }
        /* Considerando o fato de um vetor com ímpar elementos nao pode ser 
        dobrado.
        */
        if(aux % 2 != 0){
            System.out.println(Arrays.toString(randomValues));
            System.out.println("Não vai ser possivel 'dobrar' esse vetor.");
        }else{
            // operando a soma de posições (dobra)
            System.out.println(Arrays.toString(randomValues));
            for(int i=0; i<aux/2; i++)operated[i] = randomValues[i] + randomValues[(aux-1)-i];
            System.out.println(Arrays.toString(operated));
        }
    }
}
