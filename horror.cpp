#include <bits/stdc++.h>
using namespace std;

typedef vector<int> VI;
typedef pair<int,int> II;
typedef vector<VI> VVI;

#define print(x) cout << x << '\n'

#define INF 1e9

VVI g;
VI d;

int main() {
    int N, H, L, a, b;
    queue<int> q;
    scanf("%d %d %d", &N, &H, &L);
    d.assign(N, INF);
    g.assign(N, VI());
    for (int i=0; i<H; i++) {
        scanf("%d", &a);
        q.push(a);
        d[a] = 0;
    }
    for (int i=0; i<L; i++) {
        scanf("%d %d", &a, &b);
        g[a].push_back(b);
        g[b].push_back(a);
    }

    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : g[u]) {
            if (d[v] == INF) {
                d[v] = d[u] + 1;
                q.push(v);
            }
        }
    }

    int m = -1;
    for (int i=0; i<N; i++) {
        m = max(m, d[i]);
    }
    for (int i=0; i<N; i++) {
        if (d[i] == m) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
