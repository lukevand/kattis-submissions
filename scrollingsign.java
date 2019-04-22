import java.util.*;
import java.io.*;

class scrollingsign {
    private static int hangover(String a, String b, int k) {
        // char c = b.charAt(0);
        // int i = k-1;
        // while (i > 0 && a.charAt(i) != c) {
        //     i--;
        // }
        // System.out.println(i);
        // return i;
        // int i = 1;
        // while (i < k) {
        //     System.out.println(a + " " + b.substring(0, k-i));
        //     System.out.printf("i=%d k=%d\n", i, k);
        //     if (a.endsWith(b.substring(0, k-i))) {
        //         return 2*(k-i);
        //     }
        //     i++;
        // }
        // return 2*k;
        int i = 0;
        int j = 1;
        while (a.charAt(i) != b.charAt(j)) {
            i++;
            j++;
        }



    }

    public static void main(String[] args) {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        System.out.println(hangover("CAT", "BOB", 3));
    }
}

