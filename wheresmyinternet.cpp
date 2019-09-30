#include <bits/stdc++.h>
using namespace std;

typedef vector<int> VI;
typedef vector<VI> VVI;

VVI G;
vector<bool> visted;

void dfs(int v) {
    visted[v] = 1;
    for (int u : G[v]) {
        if (!visted[u]) {
            dfs(u);
        }
    }
}

int main()
{
    int N, M, x, y;
    scanf("%d %d", &N, &M);
    G.assign(N+1, VI());
    visted.assign(N+1, 0);
    while (M--) {
        scanf("%d %d", &x, &y);
        G[x].push_back(y);
        G[y].push_back(x);
    }
    dfs(1);
    bool missing = false;
    for (int i=1; i<=N; i++) {
        if (!visted[i]) {
            printf("%d\n", i);
            missing = true;
        }
    }
    if (!missing) {
        printf("Connected\n");
    }
    return 0;
}

