#include<bits/stdc++.h>

using namespace std;

typedef pair<int, int> II;
typedef pair<int, pair<int,int>> III;
typedef vector<int> VI;
typedef vector<II> VII;
typedef vector<VI> VVI;
typedef vector<VII> VVII;
#define INF 1e9

int main()
{
    int N, a;
    scanf("%d", &N);
    VVII g(N, VII());
    VVI dist(N, VI(N, INF));
    VI cost(N, INF);
    for (int i=0; i<N; i++){
        scanf("%d", &a);
        cost[i] = a;
    }

    priority_queue<III, vector<III>, greater<III>> pq;
    dist[0][0] = 0;
    pq.push(III(0, II(0, 0)));
    while (!pq.empty()) {
        III front = pq.top(); pq.pop();
        int d = front.first;
        int u = front.second.first, lastJump = front.second.second;
        cout << u << " " << lastJump << '\n';
        if (d > dist[u][lastJump]) continue;
        VI next = {abs(lastJump)+1, -abs(lastJump)};
        for (int nextJump : next) {
            cout << "next: " << nextJump << '\n';
            if (u+nextJump >= N || u+nextJump < 0) continue;
            if (dist[u][lastJump] + cost[u+nextJump] < dist[u+nextJump][nextJump]) {
                dist[u+nextJump][nextJump] = dist[u][lastJump] + cost[u+nextJump];
                pq.push(III(dist[u+nextJump][nextJump], II(u+nextJump, nextJump)));
            }
        }
    }
    int m = INF;
    for (int x : dist[N-1]) {
        m = min(m, x);
    }
    printf("%d\n", m);
}

