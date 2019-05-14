#include <cstdio>
using namespace std;

class UnionFind {
    int *parent;
    int *rank;
    int len;
    public:
    UnionFind(int n) {
        len = n;
        parent = new int[len];
        rank = new int[len];
        for (int i = 0; i < len; i++) {
            parent[i] = i;
        }
    }
    ~UnionFind() {
        delete[] rank;
        delete[] parent;
    }

    int find(int p) {
        while (p != parent[p]) {
            parent[p] = parent[parent[p]];
            p = parent[p];
        }
        return p;
    }

    void unionn(int p1, int p2) {
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

};

int main() {
    int n, m;
    int p, q;
    char cmd;
    scanf("%d %d", &n, &m);
    UnionFind uu = UnionFind(n);

    while (m--) {
        scanf(" %c %d %d", &cmd, &p, &q);
        int root1 = uu.find(p);
        int root2 = uu.find(q);
        if (cmd == '?') {
            // find
            if (root1 == root2) {
                printf("yes\n");
            } else
                printf("no\n");
        } else {
            // union
            uu.unionn(root1, root2);
        }
    }
    return 0;
}
