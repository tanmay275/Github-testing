import java.util.Scanner;

public class amstrong {
    public static void main(String[] args) {
        int t, r, s = 0;
        System.out.println("enter the number=");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        t = n;
        sc.close();
        while (n > 0) {
            r = n % 10;
            s = s + (r * r * r);
            n = n / 10;
        }
        if (t == s) {
            System.out.println("amstrong number");

        } else {
            System.out.println("not amstrong number");

        }

    }
}
