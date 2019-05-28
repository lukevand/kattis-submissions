#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

class UnionFind {
    private:
    vi parent, rank, setSize, setSum, value;
    int numSets;
    public:
    UnionFind(int n) {
        numSets = n;
        setSize.assign(n, 0);
        rank.assign(n, 0);
        parent.assign(n, 0);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
            setSum[i] = i;
            value[i] = i;
        }
    }

    int find(int p) {
        while (p != parent[p]) {
            child[parent[p]] = p;
            parent[p] = parent[parent[p]];
            p = parent[p];

        }
        return p;
    }

    void unionn(int p1, int p2) {
        int x = find(p1);
        int y = find(p2);
        if (x != y) {
            numSets--;
            if (rank[x] > rank[y]) {
                parent[y] = x;
                setSize[x] += setSize[y];
                setSum[x] += setSum[y];
            } else {
                parent[x] = y;
                setSize[y] += setSize[x];
                setSum[y] += setSum[x];
                if (rank[x] == rank[y]) rank[y]++;
            }
        }
    }

    void move(int p, int q) {


    void status() {
        printf("%d %d\n", setSize, setSum);
    }

};

int main() {
    int n, m;
    int p, q;
    int cmd;
    scanf("%d %d", &n, &m);
    UnionFind uu = UnionFind(n);

    while (m--) {
        scanf("%d %d %*d", &cmd, &p, &q);
        switch (cmd) {
            case 1:
                uu.unionn(p, q);
                break;
            case 2:
                uu.move(p, q);
                break;
            case 3:
                uu.status(p);
                break;
        }
    }
    return 0;
}
