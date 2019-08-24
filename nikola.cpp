#include<bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugp(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';

int C[1003];
int N;

struct state {
    int dist, pos, prev_jump;
    state(int _d, int _p, int _prev) : dist(_d), pos(_p), prev_jump(_prev) {};
    bool operator<(const state& rhs) const { return dist < rhs.dist; }
};

int main()
{
    scanf("%d", &N);
    for (int i=0;i<N;i++){
        scanf("%d", &C[i]);
    }

    priority_queue<state, vector<state>, less<state>> pq;
    pq.push(state(INF, 0, 0));
    int dp[N+1][N+1];
    dp[0][0] = 0;
    /* memset(dp, INF, sizeof dp); */
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            dp[i][j] = INF;
            dp[i][0] = 0;
        }
    }
    while (!pq.empty()) {
        state front = pq.top();
        pq.pop();
        int dist = front.dist;
        int pos = front.pos;
        int prevJump = front.prev_jump;
        debug(dist << pos << prevJump);
        /* if (dist > dp[pos][prevJump]) continue; */
        int nex = pos+prevJump+1;
        debug(nex);
        debug(dp[pos][prevJump]);
        debug(dp[nex][prevJump]);
        if (dp[pos][prevJump] + C[nex] < dp[nex][prevJump]) {
            dp[nex][prevJump] = dp[pos][prevJump] + C[nex];
            pq.push(state(dp[nex][prevJump], nex, prevJump));
        }
        nex = pos-prevJump;
        if (dp[pos][prevJump] + C[nex] < dp[nex][prevJump]) {
            dp[nex][prevJump] = dp[pos][prevJump] + C[nex];
            pq.push(state(dp[nex][prevJump], nex, prevJump));
        }
    }

    /* debugp(dp); */
    debug(dp[N][N]);

    /* for (int j = 0; j < (int)AdjList[u].size(); j++) { */
    /*   ii v = AdjList[u][j];                       // all outgoing edges from u */
    /*   if (dist[u] + v.second < dist[v.first]) { */
    /*     dist[v.first] = dist[u] + v.second;                 // relax operation */
    /*     pq.push(ii(dist[v.first], v.first)); */



    /* memset(memo, -1, sizeof memo); */
    /* memo[2][1] = C[2]; */
    /* memo[1][1] = C[1]+C[2]; */
    /* for (int k=1; k<N; k++) { */
    /*     solve(N, k); */
    /* } */
    /* printf("%d\n", t); */

    /* return 0; */


}

