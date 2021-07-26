import java.util.*;

public class print3star {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the number=");
        int a = sc.nextInt();
        sc.close();
        for (int i = 1; i <= a; i++) 
        {
            for (int j = 1; j <= a - i; j++) 
            {
                System.out.print(" ");

            }
            for (int k = 1; k <= i; k++) 
            {
                System.out.print("* ");

            }
        System.out.println();
        }

    }

}
