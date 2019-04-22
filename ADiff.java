import java.util.*;
import java.io.*;
import java.math.BigInteger;

class ADiff {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String line;
        while ((line = in.readLine()) != null) {
            long a, b;
            String[] parts = line.split(" ");
            a = Long.parseLong(parts[0]);
            b = Long.parseLong(parts[1]);
            System.out.println(Math.abs(b - a));
        }
    }
}

