import java.util.*;
import java.io.*;

class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));
        String[] nm = in.readLine().split(" ");
        int n = Integer.parseInt(nm[0]);
        int m = Integer.parseInt(nm[1]);
        UnionFind uu = new UnionFind(n);

        while (m-- > 0) {
            String[] cmds = in.readLine().split(" ");
            int p = Integer.parseInt(cmds[1]);
            int q = Integer.parseInt(cmds[2]);
            int root1 = uu.find(p);
            int root2 = uu.find(q);
            if (cmds[0].equals("?")) {
                // find
                if (root1 == root2) {
                    out.write("yes\n");
                } else
                    out.write("no\n");
            } else {
                // union
                uu.union(root1, root2);
            }
        }
        out.flush();
        in.close();
    }
}

class UnionFind {
    public int[] parent;
    public int[] rank;
    private int len;

    public UnionFind(int n) {
        len = n;
        parent = new int[len];
        rank = new int[len];
        for (int i = 0; i < len; i++) {
            parent[i] = i;
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
            if (rank[root1] < rank[root2]) {
                parent[root1] = root2;
            } else if (rank[root1] > rank[root2]) {
                parent[root2] = root1;
            } else {
                parent[root2] = root1;
                rank[root1] += 1;
            }
        }
    }

}
