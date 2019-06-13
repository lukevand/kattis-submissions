import java.util.*;
import java.io.*;
import java.math.BigInteger;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));

        int T;
        BigInteger n, e;
        List<Long> factors = new ArrayList<>();
        T = Integer.parseInt(in.readLine());
        while (T-- > 0) {
            String[] line = in.readLine().split(" ");
            n = new BigInteger(line[0]);
            e = new BigInteger(line[1]);
            pf.clear();
            // out.write(n.modInverse(e).toString());
        }
        in.close();
        out.flush();
    }
}

