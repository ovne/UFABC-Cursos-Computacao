/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package teorica2exe4;

/**
 *
 * @author olive
 */
public class Teorica2exe4 {
    public static boolean palindromo(int [] vet){
        int k = vet.length;
        int[] aux = new int[k];
        System.arraycopy(vet, 0, aux, 0, k);
        
        for(int i = k-1; i >=0; i--){
            if(aux[i] != vet[(k-1)-i]) return false;
        }
        return true;
    }

    public static void main(String[] args) {
        int [] vet = {1,2,2,3,2,2,1};
        System.out.println(palindromo(vet));
    }
}
