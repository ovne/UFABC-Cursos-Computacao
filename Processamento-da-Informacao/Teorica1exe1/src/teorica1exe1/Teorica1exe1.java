/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package teorica1exe1;

/**
 *
 * @author olive
 */
public class Teorica1exe1 {
    
    /* 
    -> ler n notas num vetor P1
    -> imprimir todas > media, a menor e a maior.
    */
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        double p1[] = {6.5, 5.5, 10, 8.9, 7.4, 6.9, 2.5, 5.9, 9.5, 8.4};
        
        double total = 0 , media, maior, menor;
        for(int i=0; i<p1.length; i++){
            total = total + p1[i];
        }
        // trabalhando coma média
        media = total / p1.length;
        System.out.println("A média das notas:"+media);
        for(int j=0; j<p1.length; j++){
            if(p1[j] > media){
                System.out.println("Nota acima da média na posição "+j+": "+p1[j]);
            }
        }
        //buscando maior nota
        maior = p1[0];
        for(int k=1; k<p1.length; k++){
            if(p1[k] > maior)maior = p1[k];
        }
        System.out.println("A maior nota foi:"+ maior);
        // buscando a menor
        menor = p1[0];
        for(int m=1; m<p1.length; m++){
            if(p1[m] < menor)menor = p1[m];
        }
        System.out.println("A menor nota foi:"+ menor);
    }
    
}
