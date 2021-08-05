class company {

    int slary = 30000;

    // paramitarized
    company(int x) {

        System.out.println(x);

    }

    // default
    company() {

        System.out.println(slary);

    }

}

public class constructer {

    public static void main(String[] args) {

        company souvik = new company();
        company tanmay = new company(50000);

        // tanmay.slary = 50000;

        // System.out.println(souvik.slary);
        // System.out.println(tanmay.slary);

    }
}
