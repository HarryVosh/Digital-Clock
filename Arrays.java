import java.util.*;

public class Arrays {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int numbers[] = new int[size];
        for (int i = 0; i < size; i++) {
            numbers[i] = sc.nextInt();
        }
        Boolean isAscending = true;
        for (int i = 0; i < numbers.length - 1; i++) {
            if (numbers[i] > numbers[i + 1]) {
                isAscending = false;
            }
        }
        if (isAscending) {
            System.out.println("The arrays is shorted in Ascending order .");
        } else {
            System.out.println("The arrays is not shorted in Ascending order .");
        }
    }
}
