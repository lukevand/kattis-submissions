#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef pair<int, pair<int, int>> iii;

#define debug(XXX) cout << #XXX << ": " << XXX << '\n'

class UnionFind {                                              // OOP style
private:
  vi p, rank, setSize;                       // remember: vi is vector<int>
  int numSets;
public:
  UnionFind(int N) {
    setSize.assign(N, 1); numSets = N; rank.assign(N, 0);
    p.assign(N, 0); for (int i = 0; i < N; i++) p[i] = i; }
  int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
  bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
  void unionSet(int i, int j) {
    if (!isSameSet(i, j)) { numSets--;
    int x = findSet(i), y = findSet(j);
    // rank is used to keep the tree short
    if (rank[x] > rank[y]) { p[y] = x; setSize[x] += setSize[y]; }
    else                   { p[x] = y; setSize[y] += setSize[x];
                             if (rank[x] == rank[y]) rank[y]++; } } }
  int numDisjointSets() { return numSets; }
  int sizeOfSet(int i) { return setSize[findSet(i)]; }
};

inline int distance2(int &x1, int &y1, int &x2, int &y2) {
    return pow(x1-x2, 2) + pow(y1-y2, 2);
}


int main()
{
    vector<iii> graph;
    vii points;
    int N, S, P, x, y;
    scanf("%d", &N);
    while (N--) {
        points.clear();
        graph.clear();
        scanf("%d %d", &S, &P);
        for (int i=0; i<P; i++) {
            scanf("%d %d", &x, &y);
            points.push_back(ii(x, y));
        }
        for (int i = 0; i < P-1; i++) {
            for (int j = i+1; j < P; j++) {
                int d = distance2(points[i].first, points[i].second, points[j].first, points[j].second);
                /* debug(d); */
                graph.push_back(iii(d, ii(i, j)));
                /* graph.push_back(iii(d, ii(j, i))); */
            }
        }

        UnionFind uf = UnionFind(P);
        sort(graph.begin(), graph.end());
        for (iii edge: graph) {
            /* debug(edge.first); debug(edge.second.first);debug(edge.second.second); */
            /* debug(uf.numDisjointSets()); */
            uf.unionSet(edge.second.first, edge.second.second);
            if (uf.numDisjointSets() == S) {
                printf("%.2f\n", sqrt(edge.first));
                break;
            }
        }

    }

    return 0;
}

