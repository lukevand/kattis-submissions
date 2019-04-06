import java.io.*;

public class Modulo {

    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int[] counts = new int[42];
        int N = 10;
        int count = 0;

        while (N-- > 0) {
            int line = Integer.parseInt(in.readLine());
            for (int i = 0; i < 10; i++) {
                counts[line % 42]++;
            }
        }

        for (int i = 0; i < 42; i++) {
            if (counts[i] > 0) {
                count++;
            }
        }
        System.out.println(count);

    }

}
