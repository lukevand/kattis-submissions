import java.util.*;
import java.io.*;
import java.math.BigInteger;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        BigInteger b = new BigInteger(in.readLine(), 8);
        System.out.println(b.toString(16).toUpperCase());
    }
}

