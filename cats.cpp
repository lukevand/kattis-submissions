#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debugvii(X) for(auto const& CCC:X) std::cerr<<CCC.first<<', '<<CC.second << '\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'

class UnionFind {
    vi rank, p;
    int N;
    public:
    UnionFind(int n) {
        N = n;
        rank.assign(n, 0); p.assign(n, 0);
        for (int i=0; i<=n; i++) { p[i] = i; }
    }

    int find(int i) { return (p[i] == i) ? i : (p[i] = find(p[i])); }

    int num(void) { return N; }

    void unite(int i, int j) {
        int x = find(i);
        int y = find(j);
        if (rank[x] > rank[y]) {
            p[y] = x;
        } else { p[x] = y; if (rank[x] == rank[y]) rank[y]++; }
        N--;
    }
};


int main()
{
    cin.sync_with_stdio(false);
    int T;
    int M, C, a, b, d;
    int tot;
    int bound;
    cin >> T;
    while (T--) {
        vector<pair<int, ii>> graph;
        tot = 0;
        cin >> M >> C;
        /* debug(M); */
        /* debug(C); */
        bound = M - C;
        /* debug(bound); */
        UnionFind tree = UnionFind(C);
        if (C == 1 && M >= 1) {
            cout << "yes\n";
        } else {
            C = (C*(C-1))/2;
            while (C--) {
                cin >> a >> b >> d;
                graph.push_back(pair(d, ii(a, b)));
            }
            sort(graph.begin(), graph.end());
            /* for (auto i: graph) { */
            /*     debug(i.first); */
            /* } */
            for (pair<int, ii> g: graph) {
                /* debug(tot); */
                if (tree.find(g.second.first) != tree.find(g.second.second)) {
                    tot += g.first;
                    tree.unite(g.second.first, g.second.second);
                }
            }
            /* debug(T); */
            /* debug(tot); */
            /* debug(bound); */
            if (tot > bound) {
                cout << "no\n";
            } else {
                cout << "yes\n";
            }
        }
    }
    return 0;
}

