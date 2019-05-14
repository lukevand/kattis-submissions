import java.util.*;
import java.io.*;
import java.math.BigInteger;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(in.readLine());
        while (t-- > 0) {
            String line[] = in.readLine().split(" ");
            BigInteger K = new BigInteger(line[0]);
            BigInteger C = new BigInteger(line[1]);
            BigInteger gcd = K.gcd(C);
            BigInteger upperBound = BigInteger.TEN.pow(9);
            // System.err.format("(%s, %s) = %s\n", K, C, gcd);

            if (C.compareTo(K.add(BigInteger.ONE)) > 0) {
                System.out.println("IMPOSSIBLE");

            } else if (C.equals(BigInteger.ONE) && (K.compareTo(upperBound) >= 0)) {
                System.out.println("IMPOSSIBLE");

            } else if (C.equals(BigInteger.ONE)) {
                System.out.println(K.add(BigInteger.ONE));

            } else if (gcd.equals(BigInteger.ONE)) {
                BigInteger numBags = C.modInverse(K);
                // System.err.format("%s^-1 (mod %s) = %s\n", C, K, numBags);
                if (numBags.compareTo(upperBound) > 0) {
                    System.out.println("IMPOSSIBLE");
                } else if (numBags.equals(BigInteger.ZERO)) {
                    System.out.println(1);
                } else {
                    System.out.println(numBags);
                }

            } else {
                System.out.println("IMPOSSIBLE");
            }
            // System.err.println();
        }
        in.close();
    }
}

