import java.util.*;
import java.io.*;

class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String[] nm = in.readLine().split(" ");
        int n = Integer.parseInt(nm[0]);
        int m = Integer.parseInt(nm[1]);
        AlmostUnionFind uu = new AlmostUnionFind(n);

        while (m-- > 0) {
            // pp(parent, n+1);
            String[] cmds = in.readLine().split(" ");
            uu.pp();
            // System.out.println("cmd: " + cmds[0] +" "+ cmds[1]);
            if (cmds[0].equals("3")) {
                int num = Integer.parseInt(cmds[1]);
                System.out.format("%d %d\n", uu.count[num], uu.sum[num]);
            } else if (cmds[0].equals("1")) {
                // union
                int p = Integer.parseInt(cmds[1]);
                int q = Integer.parseInt(cmds[2]);
                int root1 = uu.find(p);
                int root2 = uu.find(q);
                uu.union(root1, root2);
            } else {
                // 2
                int p = Integer.parseInt(cmds[1]);
                int q = Integer.parseInt(cmds[2]);
                uu.almostunion(p, q);
            }
        }
        in.close();
    }
}

class AlmostUnionFind {
    public int[] parent;
    public int[] rank;
    public int[] count;
    public long[] sum;
    private int len;

    public AlmostUnionFind(int n) {
        len = n+1;
        parent = new int[len];
        rank = new int[len];
        count = new int[len];
        sum = new long[len];
        for (int i = 1; i < len; i++) {
            parent[i] = i;
            count[i] = 1;
            sum[i] = i;
        }
    }

    public int find(int p) {
        while (p != parent[p]) {
            parent[p] = parent[parent[p]];
            p = parent[p];
        }
        return p;
    }

    public void union(int p1, int p2) {
        int root1 = find(p1);
        int root2 = find(p2);
        if (root1 != root2) {
            if (rank[root1] > rank[root2]) {
                parent[root2] = root1;
                count[root1] += count[root2];
                sum[root1] += sum[root2];
            } else {
                parent[root1] = root2;
                count[root2] += count[root1];
                sum[root2] += sum[root1];
                if (rank[root1] == rank[root2]) {
                    rank[root2] += 1;
                }
            }
        }
    }

    public void almostunion(int p, int q) {
        int root1 = find(p);
        int root2 = find(q);
        if (root1 != root2) {
            count[root1] -= 1;
            count[root2] += 1;
            sum[root1] -= p;
            sum[root2] += p;
            parent[p] = root2;
        }
    }

    public void pp() {
        for (int j = 0; j < len; j++) {
            System.out.format("%d", parent[j]);
        }
        System.out.println();
    }
}
