import java.util.*;

public class string {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the name=");
        String bc = sc.nextLine();
        // String pc = new String("goood morning name");
        String pc = "goood moring name";
        pc = pc.replace("name", bc);
        System.out.println(pc);
        sc.close();
    }

}
