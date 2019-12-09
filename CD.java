import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String line = in.readLine();
        while (!line.equals("0 0")) {
            String[] parts = line.split(" ");
            int N = Integer.parseInt(parts[0]);
            int M = Integer.parseInt(parts[1]);
            HashSet<Integer> jack = new HashSet<>(N);
            int count = 0;
            while (N-- > 0) {
                jack.add(Integer.parseInt(in.readLine()));
            }
            while (M-- > 0) {
                if (jack.contains(Integer.parseInt(in.readLine()))) {
                    count++;
                }
            }
            System.out.println(count);
            line = in.readLine();
        }
    }
}

