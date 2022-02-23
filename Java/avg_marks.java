import java.util.*;

public class avg_marks {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the number=");
        float a = sc.nextFloat();
        System.out.print("enter the number=");
        float b = sc.nextFloat();
        System.out.print("enter the number=");
        float c = sc.nextFloat();
        System.out.print("enter the number=");
        float d = sc.nextFloat();
        System.out.println("the avg marks=" + (a + b + c + d) / 4);

        sc.close();
    }

}
