/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ep3_7;

/*Faça um programa que fique lendo números do usuário até que ele digite 0 . 
Quando isso ocorrer, mostre quantos números são múltiplos de 3 e quantos são
múltiplos de 5.

Entrada:
Uma sequência de números inteiros. A leitura é encerrada quando o usuário digitar 0 (zero).
Saída:
Quantidade de múltiplos de 3 digitados;
Quantidade de múltiplos de 5 digitados. */

import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Ep3_7 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int m3 =0;
        int m5 =0;
        int n;
        do{
            n = input.nextInt();
            if(n%3 ==0 && n!=0)m3++;
            if(n%5 ==0 && n!=0)m5++;
        }while(n!=0);
        System.out.println(m3);
        System.out.println(m5);
    }
}
