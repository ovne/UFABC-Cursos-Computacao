/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ep4_2;

/*Escreva um programa para ler a nota e o nome dos alunos de uma classe, 
considerando n alunos. Calcular a média da classe a partir da nota de seus n alunos. 
Finalmente, escrever quais alunos conseguiram nota acima da média da classe.

Entrada:
Um valor n (quantidade de alunos);
n nomes e notas de alunos.
Exemplo:
5
Ana
6
Maria
1
Paula
8
Raul
2
Vitor
3
Saída:
Nomes dos alunos com notas acima da média (um nome por linha).

Exemplo:
Ana
Paula
 */

import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Ep4_2 {
    
    public static double average(double[] grades){
        double sum = 0;
        for(double i:grades)sum = sum+i;
        return sum/grades.length;
    }

    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        
        //declarando um vetor para os alunos e outro para as notas
        String[] studs = new String[n];
        double[] grades = new double[n];
        double media;
        
        //preenchendo os vetores
        for(int i=0; i<n; i++){
            studs[i] = input.next();
            grades[i] = input.nextDouble();
        }
        //buscando alunos acima da media
        for(int i=0; i<n; i++){
            if(grades[i] > average(grades)){
                System.out.println(studs[i]);
            }
        }
    }
}
