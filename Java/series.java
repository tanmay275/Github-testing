public class series {
    static void siri(int n) {
        if (n > 0) {
            siri(n - 1);
            System.out.println(n);

        }

        // for (int i = 1; i <= x; i++) {
        // System.out.println(i);

        // }
    }

    public static void main(String[] args) {
        int n = 10;
        siri(n);
    }

}
