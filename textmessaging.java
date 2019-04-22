import java.util.*;
import java.io.*;

class textmessaging {
    private static long parseRow(String line, int P, int K, int L) {
        String[] freq = line.split(" ");
        ArrayList<Integer> A = new ArrayList<>();
        for (int i=0; i < freq.length; i++) {
            A.add(Integer.parseInt(freq[i]));
        }
        A.sort(Collections.reverseOrder());
        long total = 0;
        for (int i = 0; i < A.size(); i++) {
            total += (i/K + 1) * A.get(i);
        }
        return total;

    }
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int numCases = Integer.parseInt(in.readLine());
        for (int i = 1; i <= numCases; i++) {
            int P, K, L;
            String[] line = in.readLine().split(" ");
            P = Integer.parseInt(line[0]);
            K = Integer.parseInt(line[1]);
            L = Integer.parseInt(line[2]);
            long num = parseRow(in.readLine(), P, K, L);
            System.out.format("Case #%d: %d\n", i, num);
        }
    }
}

