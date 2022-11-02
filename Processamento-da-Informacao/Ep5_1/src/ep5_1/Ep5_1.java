/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ep5_1;

/*Escreva um programa que leia uma matriz para armazenar as C notas de uma turma
e calcular a média de cada um dos L alunos. Portanto, será lida uma matriz com
L linhas (uma para cada aluno) e C colunas (cada coluna terá uma nota). 
Após isso, calcule a média (aritmética) das C notas para cada aluno e adicione 
a coluna C+1 com a média. Após isso, imprima a matriz completa, com L linhas e C+1 colunas.

Entrada:
L (número de alunos)
C (quantidade de notas)
Dados da matriz */

import java.util.Scanner;

public class Ep5_1 {

    public static void main(String[] args) {
        
        // instanciando coisas uteis
        Scanner input = new Scanner(System.in);
        int l = input.nextInt();
        int c = input.nextInt();
        float[][] mat = new float[l][c+1];
       
        /* a seguinte estrutura garante que as entradas sejam alocada somente 
        até a penultimas coluna. Bem como calcula a media aritimética e aloca
        na ultima coluna.
        */
        
        for(int i=0; i<l; i++){
            float sum = 0;
            for(int j=0; j<c; j++){
                mat[i][j] =  input.nextFloat();
                sum += mat[i][j];
            }
            mat[i][c] = (sum/c);
        }
        // inpressão da matriz.
        for(int i=0; i<l; i++){
            for(int j=0; j<=c; j++){
                System.out.printf("%.2f ",mat[i][j]);
            }
            System.out.println();
        }
    }
}
