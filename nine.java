import java.util.*;
import java.io.*;
import java.math.BigInteger;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(in.readLine());
        while (T-- > 0) {
            long d = Long.parseLong(in.readLine());
            BigInteger B = new BigInteger(d-1);
            BigInteger b = new BigInteger(9);
            System.out.println(b.pow(B).multiply(BigInteger.valueOf(8)).mod(BigInteger.valueOf(1_000_000_007)));
        }
    }
}

