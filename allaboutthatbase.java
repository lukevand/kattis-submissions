import java.util.*;
import java.io.*;
import java.math.BigInteger;

class Main {

    public static boolean allones(String s) {
        for (int i=0; i<s.length(); i++) {
            if (s.charAt(i) != '1') {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(in.readLine());
        String base = "0123456789abcdefghijklmnopqrstuvwxyz0";
        while (n-- > 0) {
            String[] line = in.readLine().split(" ");
            boolean didsomething = false;
            if (allones(line[0]) && allones(line[2]) && allones(line[4])) {
                int first = line[0].length();
                int second = line[2].length();
                int result = line[4].length();
                switch (line[1].charAt(0)) {
                    case '+':
                        // out.write(i + " " + first + " " + second + "\n");
                        if (first+second == result) {
                            out.write('1');
                            didsomething = true;
                        }
                        ;;
                    case '-':
                        if (first-second == result) {
                            out.write('1');
                            didsomething = true;
                        }
                        ;;
                    case '/':
                        if (first%second == 0 && first/second == result) {
                            out.write('1');
                            didsomething = true;
                        }
                        ;;
                    case '*':
                        if (first*second == result) {
                            out.write('1');
                            didsomething = true;
                        }
                        ;;
                }
            }
            for (int i = 2; i<=36; i++) {
                try {
                    BigInteger first = new BigInteger(line[0], i);
                    BigInteger second = new BigInteger(line[2], i);
                    BigInteger result = new BigInteger(line[4], i);
                    switch (line[1].charAt(0)) {
                        case '+':
                            // out.write(i + " " + first + " " + second + "\n");
                            if (first.add(second).equals(result)) {
                                out.write(base.charAt(i));
                                didsomething = true;
                            }
                            ;;
                        case '-':
                            if (first.subtract(second).equals(result)) {
                                out.write(base.charAt(i));
                                didsomething = true;
                            }
                            ;;
                        case '/':
                            BigInteger[] divmod = first.divideAndRemainder(second);
                            if (divmod[1].equals(BigInteger.ZERO) && divmod[0].equals(result)) {
                                out.write(base.charAt(i));
                                didsomething = true;
                            }
                            ;;
                        case '*':
                            if (first.multiply(second).equals(new BigInteger(line[4], i))) {
                                out.write(base.charAt(i));
                                didsomething = true;
                            }
                            ;;
                    }
                } catch (NumberFormatException e) {
                    // System.err.println(e);
                    ;
                }
            }
            if (!didsomething) {
                out.write("invalid");
            }
            out.write("\n");

        }
        in.close();
        out.flush();
    }
}

