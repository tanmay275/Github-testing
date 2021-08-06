import java.util.Scanner;

public class kmtomiles {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the km=");
        double km = sc.nextDouble();
        double miles = 0.62137 * km;
        System.out.println(miles);
        sc.close();

    }

}
