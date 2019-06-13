import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));

        String s;
        int caseNum = 1;
        while ((s = in.readLine()) != null) {
            out.write(String.format("Case %d:\n", caseNum));
            caseNum++;
            String[] ss = s.split(" ");
            int a = Integer.parseInt(ss[0]);
            int b = Integer.parseInt(ss[1]);
            ss = in.readLine().split(" ");
            int c = Integer.parseInt(ss[0]);
            int d = Integer.parseInt(ss[1]);
            int det = a*d - b*c;
            out.write(String.format("%d %d\n", d/det, -b/det));
            out.write(String.format("%d %d\n", -c/det, a/det));
            in.readLine();
        }
        in.close();
        out.flush();
    }
}

