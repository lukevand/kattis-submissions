#include <bits/stdc++.h>
using namespace std;

#define INF (int)1e9

typedef pair<int, int> II;
typedef vector<II> VII;
typedef vector<int> VI;
typedef vector<VII> VVII;

VI spiderdist;

int main()
{
    int N, M, T, u, v, d, s, t, a, K;
    scanf("%d %d %d", &N, &M, &T);
    priority_queue<II, VII, greater<II>> spiderPq;
    VVII g(N, VII());
    spiderdist.assign(N, INF);
    for (int i=0; i<M; i++) {
        scanf("%d %d %d", &u, &v, &d);
        g[u].push_back(II(v, d));
        g[v].push_back(II(u, d));
    }
    scanf("%d %d", &s, &t);
    scanf("%d", &K);
    for (int i=0; i<K; i++) {
        scanf("%d", &a);
        spiderPq.push(II(0, a));
        spiderdist[a] = 0;
    }
    while (!spiderPq.empty()) {
        II front = spiderPq.top(); spiderPq.pop();
        int u = front.second, d = front.first;
        if (d > spiderdist[d]) continue;
        for (II v : g[u]) {
            if (spiderdist[u] + v.second < spiderdist[v.first]) {
                spiderdist[v.first] = spiderdist[u] + v.second;
                spiderPq.push(II(spiderdist[v.first], v.first));
            }
        }
    }


    return 0;
}

