import java.util.*;
import java.io.*;

class wertyu {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        HashMap<Character,Character> hash = new HashMap<>();
        String[] qwerty = {
            "`1234567890-=",
            "QWERTYUIOP[]\\",
            "ASDFGHJKL;'",
            "ZXCVBNM,./"
        };
        for (String row : qwerty) {
            for (int i = 1; i < row.length(); i++) {
                hash.put(row.charAt(i), row.charAt(i-1));
            }
        }
        hash.put(' ', ' ');

        String line;
        while ((line = in.readLine()) != null) {
            StringBuilder outline = new StringBuilder();
            for (int i = 0; i < line.length(); i++) {
                outline.append(hash.get(line.charAt(i)));
            }
            System.out.println(outline);
        }
    }
}

