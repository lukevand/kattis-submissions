import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));

        Stack<Character> stack = new Stack<>();
        String s = in.readLine();
        for (int i=0; i<s.length(); i++) {
            char ch = s.charAt(i);
            if (ch == '<') {
                stack.pop();
            } else {
                stack.push(ch);
            }
        }
        for (char ch: stack) {
            out.write(ch);
        }
        out.write('\n');



        in.close();
        out.flush();
    }
}

