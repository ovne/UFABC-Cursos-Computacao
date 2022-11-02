/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ep2_8;

import java.util.Scanner;

/**
 *
 * @author Ovne.java
 */
public class Ep2_8 {

    /**
     * @param args the command line arguments
     */
    
    /*Escreva um programa que leia os valores x e y de um ponto. A partir disso,
    determine se o ponto está dentro ou fora do retângulo a seguir: (22,35)
    e (-800, -20) -- dois pontos no cartesiano que definem uma area retangular*/
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double x = input.nextDouble();
        double y = input.nextDouble();
        boolean checkX;
        boolean checkY;
        
        checkX = x > -800 && x < 22;
        checkY = y > -20 && y < 35;
        if (checkX && checkY) System.out.println("SIM");
        else System.out.println("NAO");
    }
}
