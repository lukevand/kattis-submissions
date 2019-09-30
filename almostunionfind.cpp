#include <bits/stdc++.h>
using namespace std;

typedef vector<int> VI;

class UnionFind {
    private:
        VI p, location, rank, setSize, setSum;
        int numSets;
    public:
        explicit UnionFind(int n) {
            numSets = n;
            setSize.assign(n, 0);
            setSum.assign(n, 0);
            rank.assign(n, 0);
            p.assign(n, 0);
            location.assign(n, 0);
            for (int i = 0; i < n; i++) {
                p[i] = i;
                location[i] = i;
                setSum[i] = i;
            }
        }

        int find(int i) {
            return (p[i] == i) ? i : (p[i] = find(p[i]));
        }

        void unite(int p1, int p2) {
            p1 = location[p1];
            p2 = location[p2];
            int x = find(p1);
            int y = find(p2);
            if (rank[x] > rank[y]) {
                p[y] = x;
                setSize[x] += setSize[y];
                setSum[x] += setSum[y];
            } else {
                p[x] = y;
                setSize[y] += setSize[x];
                setSum[y] += setSum[x];
                if (rank[x] == rank[y]) rank[y]++;
            }
        }

        void move(int i, int j) {
            int y = find(j);
            location[i] = y;
            setSize[i] = setSize[y]+1;
            setSum[i] = setSum[y]+i;
            setSize[y]++;
            setSum[y] += i;
        }

        void status(int i) {
            i = location[i];
            printf("%d %d\n", setSize[i], setSum[i]);
        }

};

int main() {
    int n, m;
    int p, q;
    int cmd;
    scanf("%d %d", &n, &m);
    UnionFind uu = UnionFind(n);

    while (m--) {
        scanf("%d", &cmd);
        switch (cmd) {
            case 1:
                scanf("%d %d", &p, &q);
                uu.unite(p, q);
                break;
            case 2:
                scanf("%d %d", &p, &q);
                uu.move(p, q);
                break;
            case 3:
                scanf("%d", &p);
                uu.status(p);
                break;
        }
    }
    return 0;
}
