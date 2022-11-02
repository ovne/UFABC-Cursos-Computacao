/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ep3_2;

/*Escreva um programa para verificar se um número n entrado pelo teclado é 
primo. Isto pode ser feito dividindo sucessivamente o número entrado por 
valores i, onde i varia de 2 até n-1, e verificando o resto da divisão. 
Se o resto da divisão de n por i for zero para qualquer i, exiba a mensagem 
"NAO". Caso a condição anterior não ocorra, exiba a mensagem "SIM".

Entrada:
Um número inteiro.
Saída:
Seu programa deve escrever na tela “SIM” caso o número seja primo; ou “NAO” 
caso contrário (observe que não há um "til" no "A" do "NAO"). */

import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Ep3_2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        boolean eh_primo = true;
        
        int i = 2;
        while (i < n){
            double cont = n%i;
            if (cont == 0) eh_primo = false;
            i++;
        }
        if (eh_primo){
            System.out.println("SIM");
        }else System.out.println("NAO");
}}
