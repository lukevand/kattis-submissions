#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
/* typedef vector<ii> vii; */
typedef vector<int> vi;

vi dfs_visted;

void dfs(int u, int size, vector<vi>& graph) {
    dfs_visted[u] = 1;
    for (int v: graph[u]) {
        if (dfs_visted[v] == -1) {
            dfs(v, size, graph);
        }
    }
}

int main()
{
    vector<vi> graph;
    int n, m, r, u, v;

    scanf("%d", &n);
    while (n--) {
        int count = 0;
        scanf("%d", &m);
        scanf("%d", &r);
        dfs_visted.assign(m, -1);
        graph.assign(m, vi());
        while (r--) {
            scanf("%d %d", &u, &v);
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        for (int i = 0; i < m; i++) {
            if (dfs_visted[i] == -1) {
                count++;
                dfs(i, m, graph);
            }
        }
        printf("%d\n", count-1);
    }
    return 0;
}

