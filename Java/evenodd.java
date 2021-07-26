import java.util.*;

public class evenodd {
    public static void main(String[] args) {
        System.out.println("number=");
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        // Using ternary operator
        String output = (number % 2 == 0) ? "even number" : "odd number";
        System.out.println(output);
        sc.close();
    }

}
