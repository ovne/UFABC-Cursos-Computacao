/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package teorica2exe1;

/**
 *
 * @author olive
 */
public class Teorica2exe1 {
    //metodo para retornar o index do maior elemento.
    public static int major(int[]vetor){
        int ref = vetor[0];
        int aux = 0;
        for(int i=0; i<vetor.length; i++){
            if(vetor[i] > ref){
                ref = vetor[i];
                aux = i;
            }
        }
        return aux;
    }
    public static void main(String[] args) {
        int[] vetor = {2,3,6,9,8,7,2};
        System.out.println(major(vetor));
    }
    
}
