#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> II;
typedef vector<int> VI;
typedef vector<II> VII;
typedef vector<VI> VVI;
typedef vector<VII> VVII;

#define print(x) cout << x << '\n'

#define INF 1e9

VVII g;
int P, T, l, x, y;
VI dist;
VVII parent;
int total = 0;
vector<bool> visted;


int main() {
    scanf("%d %d", &P, &T);
    g.assign(P, VII());
    dist.assign(P, INF);
    visted.assign(P, 0);
    parent.assign(P, VII());
    for (int i=0; i<T; i++) {
        scanf("%d %d %d", &x, &y, &l);
        g[x].push_back(II(y, l));
        g[y].push_back(II(x, l));
    }
    priority_queue<II, VII, greater<II>> pq;
    pq.push(II(0, 0));
    dist[0] = 0;
    while (!pq.empty()) {
        II front = pq.top(); pq.pop();
        int d = front.first, u = front.second;
        if (d > dist[u]) continue;
        for (II v:g[u]) {
            if (dist[u] + v.second < dist[v.first]) {
                parent[v.first].clear();
                dist[v.first] = dist[u] + v.second;
                pq.push(II(dist[v.first], v.first));
            }
        }
    }

    queue<int> q;
    q.push(P-1);
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (II v: g[u]) {
            if (dist[u] == dist[v.first] + v.second) {
                total += v.second;
                q.push(v.first);
            }
        }
    }
    printf("%d\n", total);
    printf("%d\n", dist[P-1]);

    return 0;
}

