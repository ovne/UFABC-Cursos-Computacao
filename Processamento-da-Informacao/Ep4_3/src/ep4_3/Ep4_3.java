/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ep4_3;

/*Criar um vetor de entrada v1 com n posições com valores inteiros positivos 
e como saída criar um outro vetor também com n posições, onde a cada posição i 
(entre 1 e n-2) seja atribuído o cálculo do MÁXIMO do seu vizinho de v1 à 
esquerda (i-1), do próprio elemento i e do seu vizinho à direita (i+1). Deixe o 
valor "0" na primeira e última posição do vetor gerado.

Entrada:
Um valor n;
n inteiros. */

import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Ep4_3 {

    public static void main(String[] args) {
        //entrada que define o tam. dos dois vetores
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] v1 = new int[n];
        int[] v2 = new int[n];
        //preenchendo v2 com 0
        Arrays.fill(v2, 0);
        //preenchendo v1
        for(int i=0; i<n; i++)v1[i] = input.nextInt();
        
        for(int j=1; j<(n-1); j++){
            v2[j] = Math.max(v1[j+1],Math.max(v1[j-1], v1[j]));
        }
        System.out.println(Arrays.toString(v2));
    }
}