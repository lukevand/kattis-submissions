import java.io.*;
import java.util.ArrayList;

class ParsingHex {

    private static void parse_line(String s) {
        boolean seen_0 = false;
        boolean in_hex = false;
        String word;
        int start = 0;
        int end = 0;
        int digits = 0;

        for (int i = 0; i < s.length(); i++) {
            if (seen_0 && (s.charAt(i) == 'x' || s.charAt(i) == 'X')) {
                in_hex = true;
            } else if (s.charAt(i) == '0') {
                 seen_0 = true;
                 start = i;
                 end = start;
            } else if (in_hex) {
                while (('a' <= s.charAt(i) && s.charAt(i) <= 'f') || ('A' <= s.charAt(i) && s.charAt(i) <= 'F')) {
                    end++;
                    i++;
                }
                word = Integer.parseInt(s.substring(start, end));
                System.out.printf("0x%X %d\n", word, word);
                start = end;


            }
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        ArrayList<String> lines = new ArrayList<>();
        String line;
        while ((line = in.readLine()) != null) {
            parse_line(line);
        }

    }

}
