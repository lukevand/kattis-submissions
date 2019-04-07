import java.io.*;
import java.util.ArrayList;

class ParsingHex {

    private static void parse_line(String s) {
        char lead_x = 'x';
        String word;
        long lword;
        int start = 0;
        int end = 0;
        int digits = 0;

        for (int i = 0; i < s.length()-1; i++) {
            if (s.charAt(i) == '0' && (s.charAt(i+1) == 'x' || s.charAt(i+1) == 'X')) {
                lead_x = s.charAt(i+1);
                start = i+2;
                end = start;
                while (end < s.length() && (('a' <= s.charAt(end) && s.charAt(end) <= 'f') || ('A' <= s.charAt(end) && s.charAt(end) <= 'F') || ('0' <= s.charAt(end) && s.charAt(end) <= '9'))) {
                    end++;
                }
                if (start != end) {
                    word = s.substring(start, end);
                    if (word.length() > 8) {
                        word = word.substring(0, 8);
                    }
                    lword = Long.parseLong(word, 16);

                    System.out.printf("0%c%s %d\n", lead_x, word, lword);
                    start = end;
                    i = end;
                }
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
