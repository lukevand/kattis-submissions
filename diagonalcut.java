import java.util.*;
import java.io.*;
import java.math.BigInteger;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));

        String[] parts = in.readLine().split(" ");
        BigInteger M = new BigInteger(parts[0]);
        BigInteger N = new BigInteger(parts[1]);
        BigInteger g = M.gcd(N);
        M = M.divide(g);
        N = N.divide(g);
        BigInteger x = N.modInverse(M);
        BigInteger y = M.modInverse(N);
        System.out.println("" + (M.multiply(x).add(N.multiply(y))) + " " + M + " " + N + " " + x + " " + y);


        in.close();
        out.flush();
    }
}

