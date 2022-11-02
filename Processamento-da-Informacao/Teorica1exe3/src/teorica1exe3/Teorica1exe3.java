/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package teorica1exe3;

import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author olive
 */
public class Teorica1exe3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // declarando vetores
        int v1[] = new int[5];
        int v2[] = new int[5];
        int v1v2[] = new int[v1.length + v2.length];
        //preenchendo vetores
        Scanner input = new Scanner(System.in);
        
        for(int i:v1)v1[i] = input.nextInt();
        for(int i:v2)v2[i] = input.nextInt();
        
        //unindo vetores SEM DESCONSIDERAR REPETIÇÕS
        for(int i=0; i<v1.length; i++){
            v1v2[i] = v1[i];
        }
        for(int i= v1.length; i<v1v2.length; i++){
            v1v2[i] = v2[i-v1.length];
        }
        for(int i  =0; i<v1v2.length; i++)System.out.print(v1v2[i]+"-");
    }
}