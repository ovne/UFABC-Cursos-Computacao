package goldmanprocesstraining;

import java.util.ArrayList;
import java.util.List;

public class GoldmanProcessTraining {
    /* Este algoritmo dos dois métodos a seguir realiza para cada elemento de 
    um vetor a substituição do seu valor pela soma dos demais valoresno array*/
    
    static int sumElements(int[] array){
        // first this method operate the sum over all elements
        int bowl = 0;
        for(int i =0; i < array.length; i++){
            bowl += array[i];
        }
        return bowl;
    }
    
    static int[] accessNShift(int[] array){
        /* knowing that the current data of an i'th position dosen't belong to
        the sums, we can just access it and subtract from the total */
        int tot = sumElements(array);
        int aux;
        for(int i=0; i <array.length; i++){
            aux = array[i];
            array[i] = tot - aux;
        }
        return array;
    }
    
    
    /* Propósito desse proximo algoritmo é calcular na "força bruta" a raiz 
    quadrada de um número*/
    static double sqrtForce(int num){
        return 0.0;
    }
    
    public static int diagonalDifference(List<List<Integer>> arr){
        
        

        
    }
    
    /*Given a square matrix, calculate the absolute difference between 
    the sums of its diagonals.*/
    public static void main(String[] args) {
        // TODO code application logic here
        ArrayList<ArrayList<Integer>> arr = new ArrayList();
        arr.addAll(arr)
        
    }
}
