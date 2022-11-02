/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aulaece03;

import java.util.Scanner;

/**
 *
 * @author olive
 */
public class AulaECE03 {    
    //metodo proposto na pg 7 do slide
    public static int[] userVet(int n){
        System.out.println("Entre com os "+n+" elementos do vetor");
        Scanner input = new Scanner(System.in);
        int[] vetor = new int[n];
        
        for(int i=0; i < n; i++)vetor[i] = input.nextInt();
        return vetor;
    }
    
    // metodo proposto pg8:
    public static int[] vezes3(int[] vetor){
        int[] vetorX3 = new int [vetor.length];
        for(int i=0; i<vetor.length;i++)vetorX3[i] = 3 * vetor[i];
        return vetorX3;
    } 
    
    //Metodo proposto pg 9:
    public static double major(double[] vetor){
        double ref = vetor[0];
        for(double i : vetor){
            if(i > ref)ref = i;
        }
        return ref;
    }
    
    // exe proposto na pg 10
    public static void printVet(int[]vetor){
        for(int i : vetor)System.out.print(i+" ");
    }
    public static int[]sumVet(int[] vetA, int[]vetB){
        int[] sumVet = new int[vetA.length];
        for(int i=0; i<sumVet.length; i++){
            sumVet[i] = vetA[i]+vetB[i];
        }
        return sumVet;
    }
    public static int[]subtractVet(int[] vetA, int[] vetB){
        int[] subtractVet = new int[vetA.length];
        for(int i=0; i<subtractVet.length; i++){
            subtractVet[i] = vetA[i] - vetB[i];
        }
        return subtractVet;
    }
    public static int[]vetXvet(int[] vetA, int[] vetB){
        int[] vetX = new int[vetA.length];
        for(int i=0; i<vetX.length; i++){
            vetX[i] = vetA[i] * vetB[i];
        }
        return vetX;
    }
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Entre com o tamanho dos vetores que sera operados:");
        int n = input.nextInt();
        //declarando os vetores e usando o metodo para prencher
        int[] vetA = userVet(n);
        int[] vetB = userVet(n);
        //pedindo entrada de operador
        System.out.println("Qual operação fazer com os vetores?");
        System.out.println("+ : para somar os vetores.");
        System.out.println("- : para subtrair os vetores.");
        System.out.println("* : para multiplicar os vetores.");
        
        //operando os vetores a partir da entrada:
        String cmd = input.next();
        System.out.println("Vetor Resultante:");
        if(null != cmd)switch (cmd) {
            case "+":
                printVet(sumVet(vetA,vetB));
                break;
            case "-":
                printVet(subtractVet(vetA,vetB));
                break;
            case "*":
                printVet(vetXvet(vetA,vetB));
                break;
            default:
                break;
        }
    }
}
