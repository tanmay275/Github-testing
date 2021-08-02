// import java.util.*;

// public class function_add {

//     static int timt(int x, int y) {
//         int z;
//         z = x + y;
//         // System.out.println(z);
//         return z;
//     }

//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.println("enter the numbers=");
//         int n1 = sc.nextInt();
//         int n2 = sc.nextInt();
//         sc.close();
//         //creating by object when function is not static
//         // function_add ky = new function_add();
//         // int xe=ky.timt(n1, n2);
//         int xe=timt(n1, n2);
//         System.out.println(xe);

//     }

// }



import java.util.*;

public class function_add {

    static void emty(){
        System.out.println("good morning dosto");
    }
    static int timt(int x, int y) {
        int z;
        z = x + y;
        // System.out.println(z);
        return z;
    }
    static void timt(int x, int y,int z) {
        System.out.println(x+y+z);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the numbers=");
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();
        int f=sc.nextInt();
        sc.close();
        //creating by object when function is not static
        // function_add ky = new function_add();
        // int xe=ky.timt(n1, n2);
        int xe=timt(n1, n2);
        timt(n1,n2,f);
        System.out.println(xe);
        emty();

    }

}
