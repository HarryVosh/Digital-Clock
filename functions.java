import java.util.*;

class functions {
    public static void main(String[] args) {
        System.out.println("Enter n : ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a = 0, b = 1;
        System.out.println(a + " ");
        if (n > 1) {
            for (int i = 2; i <= n; i++) {
                System.out.println(b + " ");
                int temp = b;
                b = a + b;
                a = temp;
            }
            System.out.println();
        }
    }
}