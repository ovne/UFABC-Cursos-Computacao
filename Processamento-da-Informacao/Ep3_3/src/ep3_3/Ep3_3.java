/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ep3_3;

import java.text.DecimalFormat;
import java.util.Scanner;

/*Escreva um programa que receba um valor inteiro n e então calcule uma
aproximação de PI usando a série de Gregory com n elementos:

Entrada:
Um número inteiro n.
Saída:
O valor de PI (utilize 3 casas decimais)*/

/**
 *
 * @author olive
 */
public class Ep3_3 {
    public static double serieLib(int n){
        double bowl = 0;
        for (int i = 0; i <= n; i++){
            double calc = (Math.pow(-1,i))/((2*i)+1);
            bowl = bowl + calc;
        }
        return (bowl*4);
    }
    public static void main(String[] args) {
        Scanner input  = new Scanner(System.in);
        DecimalFormat df = new DecimalFormat("#.###");
        int n = input.nextInt();
        
        //String aproxPi = String.format("%.3f", serieLib(n));
        System.out.println(df.format(serieLib(n)));
    }
}

