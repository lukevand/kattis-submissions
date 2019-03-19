import java.util.Scanner;

public class Modulo {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] counts = new int[42];
        int count = 0;

        for (int i = 0; i < 10; i++) {
            counts[sc.nextInt() % 42]++;
        }


        for (int i = 0; i < 42; i++) {
            if (counts[i] > 0) {
                count++;
            }
        }
        System.out.println(count);

    }

}
