/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ep3_5;

/*Faça um programa que fique lendo números do usuário até que ele digite 0. 
Quando isso ocorrer, mostre o valor da soma de todos os números lidos

Entrada:
Uma sequência de números inteiros. A leitura é encerrada quando o usuário 
digitar 0 (zero).
Saída:
Soma de todos os valores lidos. */

import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Ep3_5 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int aux = n;
        while(n !=0){
            n = input.nextInt();
            aux = aux + n;
        }
        System.out.println(aux);
    }
    
}
