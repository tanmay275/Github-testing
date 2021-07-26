import java.util.*;

public class user_input {
    public static void main(String[] args) {
        System.out.println("enter the  number=");
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        // in.hasNextInt(a);
        if (in.hasNextInt(a)) {
            System.out.println("this the intiger");
        }

        // int b= in.nextInt();
        // System.out.println("the sum is="+(a+b) );
        // String m=in.nextLine();
        // System.out.println(m);
        in.close();
    }
}
