import java.io.*;
import java.util.HashSet;

public class whatDoesTheFoxSay {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int num = Integer.parseInt(in.readLine());
        String line;

        while (num-- > 0) {
            HashSet<String> hash = new HashSet<>();
            String[] sounds = in.readLine().split(" ");
            while (!(line = in.readLine()).equals("what does the fox say?")) {
                hash.add(line.split(" ")[2]);
            }
            for (String word : sounds) {
                if (!hash.contains(word)) {
                    System.out.printf("%s ", word);
                }
            }
            System.out.println();
        }
    }

}


