package dotinrectangle;

import java.util.Scanner;

public class DotInRectangle {
    public static boolean checkX(double x){
        return x < 22 && x > -800;
}
    public static boolean checkY(double y){
        return y < 35 && y > -20;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double x = input.nextDouble();
        double y = input.nextDouble();
        if (checkX(x) && checkY(y)) System.out.println("SIM");
        else System.out.println("NAO");
    }
}