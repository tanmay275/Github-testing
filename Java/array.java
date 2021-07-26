import java.util.Scanner;

public class array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the number=");
        int n = sc.nextInt();
        int[] array = new int[10];
        System.out.println("enter the array element=");
        for (int i = 0; i < n; i++) {
            array[i] = sc.nextInt();

        }
        System.out.println(" array element=");
        for (int i = 0; i < n; i++) {
            System.out.println(array[i]);
        sc.close();
        }

    }
}