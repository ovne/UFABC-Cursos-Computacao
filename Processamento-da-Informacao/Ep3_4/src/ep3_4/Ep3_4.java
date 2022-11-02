/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ep3_4;

/*Faça um programa que leia um inteiro n e imprima um "triângulo" com os 
números. Por exemplo, para n=8, a saída seria:

1
22
333
4444
55555
666666
7777777
88888888

Entrada:
Um número inteiro n.
Saída:
Triângulo com os números. */

import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Ep3_4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for(int i=1; i<=n; i++){
            System.out.println();
            for(int j=1; j<=i; j++){
                System.out.print(i);
            }
        }
    }
    
}
