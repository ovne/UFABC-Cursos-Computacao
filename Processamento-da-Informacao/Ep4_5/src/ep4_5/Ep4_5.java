/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ep4_5;

/*Escreva um programa que leia um vetor de inteiros com n elementos. Depois faça
uma função que receba o vetor e duas posições i e j, e então efetue a troca dos
valores das posições i e j no vetor. Importante: a função deve validar os
argumentos, ou seja, se i e j são índices válidas (dentro dos limites do vetor) 
antes de realizar a troca. Se algum índice for inválido, não realize a troca.

Entrada:
Um valor n (0 <= n <= 50);
n inteiros
índices i e j */

import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Ep4_5 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        //declarando e preenchendo vetor a partir da entrada
        int[] vetor = new int[n];
        for(int i=0; i<n; i++){
            vetor[i] = input.nextInt();
        }
        //posições a serem trocadas
        int i = input.nextInt();
        int j = input.nextInt();
        //chamando o metoda q fara a troca e imprimindo
        System.out.println(Arrays.toString(shift(vetor,i,j)));
    }

    private static int[] shift(int[] vetor, int i, int j) {
        //Validando os argumentos
        if(i >(vetor.length-1) || j > (vetor.length-1))return vetor;
        else if(i < 0 || j <0)return vetor;
        //Copiando o vetor para alterar as posições
        int aux;
        int[] shift = new int[vetor.length];
        System.arraycopy(vetor, 0, shift, 0, shift.length);
        
        aux = shift[i];
        shift[i] = shift[j];
        shift[j] = aux;
        
        return shift;
    }
}
