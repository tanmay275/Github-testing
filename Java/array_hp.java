import java.util.*;

public class array_hp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // sc.close();
        int[] a = new int[10];
        for (int i = 0; i < a.length; i++) {
            a[i] = sc.nextInt();
        }
        // for (int i = 0; i < a.length; i++) {
        // System.out.println(a[i]);
        // }
        // /traversing the array with for-each loop 
        for (int i : a) {
            System.out.println(i);

        }

        sc.close();
    }

}
