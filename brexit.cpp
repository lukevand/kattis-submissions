#include <bits/stdc++.h>
using namespace std;

typedef vector<int> VI;
typedef vector<VI> VVI;

#define INF (int) 10e9

int main()
{
    int C, P, X, L;
    int x, y;
    scanf("%d %d %d %d", &C, &P, &X, &L);
    X--; L--;
    VVI adj = VVI(C+2, VI());
    VI degrees = VI(C+2, 0);
    VI newDegrees = VI(C+2, 0);
    for (int i=0; i<P; i++) {
        scanf("%d %d", &x, &y);
        x--; y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for (int i=0; i<C; i++) {
        degrees[i] = adj[i].size();
        newDegrees[i] = adj[i].size();
    }

    vector<bool> isLeaving = vector<bool>(C+2, false);
    isLeaving[L] = true;
    queue<int> q;
    for (int v : adj[L]) {
        --newDegrees[v];
        q.push(v);
    }
    while (!q.empty()) {
        /* for (int a : degrees) { printf("%d ", a); } printf("\n"); */
        /* for (int a : newDegrees) { printf("%d ", a); } printf("\n"); */
        int u = q.front(); q.pop();
        if (isLeaving[u]) {
            continue;
        }
        if (newDegrees[u] <= (degrees[u])/2) {
            isLeaving[u] = 1;
            for (int v : adj[u]) {
                newDegrees[v]--;
                q.push(v);
            }
        }
    }
    printf("%s\n", isLeaving[X] ? "leave" : "stay");


    return 0;
}

