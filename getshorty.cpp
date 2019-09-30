#include <bits/stdc++.h>
using namespace std;

/* typedef pair<int,int> II; */
typedef pair<int,double> II;
typedef vector<int> VI;
typedef vector<II> VII;
typedef vector<VII> VVII;

#define INF 1e9
#define EPS 1e-9

int main() {
    int n, m, x, y;
    double ff;
    while (scanf("%d %d", &n, &m), n && m) {
        vector<double> dist(n, INF);
        VVII G(n, VII());
        for (int i=0; i<m; i++) {
            scanf("%d %d %lf", &x, &y, &ff);
            if (fabs(ff - 1.0) < EPS) {
                ff = 1;
            } else if (ff < EPS) {
                ff = 0;
            } else {
                ff = -log(ff);
            }
            G[x].push_back(II(y, ff));
            G[y].push_back(II(y, ff));
            cout << -log(ff) << '\n';
        }
        priority_queue<II, VII> pq;
        pq.push(II(0, 0.0));
        dist[0] = 0;
        while (!pq.empty()) {
            II front = pq.top(); pq.pop();
            double d = front.first;
            int u = front.second;
            cout << "dd" << d << '\n';
            if (d > dist[u]) continue;
            for (II v:G[u]) {
                if (v.second + dist[u] < dist[v.first]) {
                    dist[v.first] = v.second + dist[u];
                    pq.push(II(dist[v.first], v.first));
                }
            }
        }
        for (auto x : dist) { cout << x << '\n'; };
        printf("aa%.10lf\n", exp(-dist[n-1]));
    }
    return 0;
}

