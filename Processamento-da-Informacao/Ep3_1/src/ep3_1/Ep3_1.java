/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ep3_1;

/*Escreva um programa para ler um número inteiro positivo n e escrever os 
n primeiros múltiplos de 3 (e que são maiores que zero).

Entrada:
Um número inteiro n

Saída:
Os n primeiros múltiplos de 3, cada número deverá ser exibido na mesma linha,
separado por um caractere espaço. */

import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Ep3_1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for (int i = 1; i <= n; i++){
            System.out.println(3*i+" ");
        }
    }
}
