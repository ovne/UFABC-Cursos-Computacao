/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package teorica2exe3;

import java.util.Arrays;

/**
 *
 * @author olive
 */
public class Teorica2exe3 {
    
    public static int[] replaceNull(int[] vetor){
        //copiando o vetor para fazer as alterações.
        int[] aux = new int[vetor.length];
        System.arraycopy(vetor, 0, aux, 0, vetor.length);
        //alterando de fato
        for(int i=0; i<aux.length; i++){
            if(aux[i] == 0 || aux[i]< 0)aux[i] = 1;
        }
        return aux;
    }

    public static void main(String[] args) {
        int[] vetor = {-2,-9,-3,0,1,8,9,6,-58};
        System.out.println(Arrays.toString(replaceNull(vetor)));
    }
}
