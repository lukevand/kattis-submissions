import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));

        Queue<Integer> q = new ArrayDeque<>();
        Queue<Integer> pq = new PriorityQueue<>((x, y) -> Integer.compare(y, x));
        Stack<Integer> s = new Stack<>();

        int n;
        String testcase;
        while ((testcase = in.readLine()) != null) {
            n = Integer.parseInt(testcase);
            boolean isq = true;
            boolean ispq = true;
            boolean iss = true;
            while (n-- > 0) {
                String[] line = in.readLine().split(" ");
                int cmd = Integer.parseInt(line[0]);
                int data = Integer.parseInt(line[1]);
                switch (cmd) {
                    case 1:
                        q.add(data);
                        pq.add(data);
                        s.push(data);
                        break;
                    case 2:
                        // int qe = q.remove();
                        // int pqe = pq.remove();
                        // int se = s.pop();
                        isq &= (q.remove() == data);
                        ispq &= (pq.remove() == data);
                        iss &= (s.pop() == data);
                        break;
                }
            }
            System.out.println("" + isq + iss + ispq);
            if (isq && !ispq && !iss) {
                out.write("queue\n");
            } else if (!isq && ispq && !iss) {
                out.write("priority queue\n");
            } else if (!isq && !ispq && iss) {
                out.write("stack\n");
            } else if (!isq && !ispq && !iss) {
                out.write("impossible\n");
            } else {
                out.write("not sure\n");
            }
        }
        in.close();
        out.flush();
    }
}

