import java.io.*;
import java.util.ArrayList;

class Pair {
    public int i;
    public int j;

    public Pair(int i, int j) {
        i = i;
        j = j;
    }

    public String toString() {
        return String.format("(%d, %d)", i, j);
    }
}

class NineKnights {

    public static void main(String[] args) throws IOException {

        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String line;
        ArrayList<Pair> knights = new ArrayList<>();
        for (int i = 0; i < 5; i++) {
            line = in.readLine();
            System.out.println(line);
            for (int j = 0; j < 5; j++) {
                if (line.charAt(j) == 'k') {
                    Pair p = new Pair(i, j);
                    System.out.println(p);
                    knights.add(p);
                }
            }
        }
        System.out.println(knights);
    }

}

