/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ep3_6;

/*Faça um programa que leia um valor inteiro n e então calcule o valor de f( n )
,conforme definição a seguir:

algo do tipo f(n) = somatorio(i=1 --> n)[somatorio(j=1 --> 8) de (i+1)j ]

Entrada:
Valor inteiro n.
Saída:
Valor de f( n ). */

import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Ep3_6 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int calc = 0;
        for(int i=1; i<= n; i++){
            for(int j=1; j<=8; j++){
               calc = calc + ((i+1)*j); 
            }
        }
        System.out.println(calc);
    }
}
