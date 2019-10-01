#include<bits/stdc++.h>

using namespace std;

typedef pair<int, int> II;
typedef pair<int, pair<int,int>> III;
typedef vector<int> VI;
typedef vector<II> VII;
typedef vector<VI> VVI;
typedef vector<VII> VVII;
#define INF 1e9

struct hash_pair {
    size_t operator()(const II& p) const {
        return hash<int>{}(p.first) ^ hash<int>{}(p.second);
    }
};

int main()
{
    int N, a;
    int m = INF;
    scanf("%d", &N);
    VVII g(N, VII());
    unordered_map<II, int, hash_pair> dist;

    VI cost(N, INF);
    for (int i=0; i<N; i++){
        scanf("%d", &a);
        cost[i] = a;
    }

    priority_queue<III, vector<III>, greater<III>> pq;
    dist[II(0,0)] = 0;
    pq.push(III(0, II(0, 0)));
    while (!pq.empty()) {
        III front = pq.top(); pq.pop();
        int d = front.first;
        int u = front.second.first, lastJump = front.second.second;
        if (d > dist[II(u,lastJump)]) continue;
        VI next = {abs(lastJump)+1, -abs(lastJump)};
        for (int nextJump : next) {
            if (u+nextJump >= N || u+nextJump < 0) continue;
            int &v = dist[II(u+nextJump,nextJump)];
            if (v == 0) { v = INF; };
            if (dist[II(u,lastJump)] + cost[u+nextJump] < dist[II(u+nextJump,nextJump)]) {
                dist[II(u+nextJump,nextJump)] = dist[II(u,lastJump)] + cost[u+nextJump];
                pq.push(III(dist[II(u+nextJump,nextJump)], II(u+nextJump, nextJump)));
                if (nextJump > 0 && u+nextJump == N-1) {
                    m = min(m, dist[II(u+nextJump,nextJump)]);
                    printf("%d\n", m);
                    return 0;
                }
            }
        }
    }
    printf("%d\n", m);
}

