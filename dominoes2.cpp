#include <bits/stdc++.h>
using namespace std;

#define print(x) //cout << #x << " " << x << '\n'

typedef vector<int> VI;
typedef vector<VI> VVI;

VI seen(10002, 0);
VVI graph(10002, VI());

int total = 0;
int T, n, m, l, start, start2, origin;

void dfs(int u) {
    print(u);
    print(seen[u]);
    seen[u] = 1;
    total += 1;
    for (int v: graph[u]) {
        if (seen[v] == 0) dfs(v);
    }
}


int main()
{
    scanf("%d", &T);
    while (T--) {
        graph.assign(10002, VI());
        seen.assign(10002, 0);
        total = 0;
        print(T);
        print(total);
        scanf("%d %d %d", &n, &m, &l);
        for (int i = 0; i < m; i++) {
            scanf("%d %d", &start, &start2);
            graph[start].push_back(start2);
        }

        for (int i = 0; i < l; i++) {
            scanf("%d", &origin);
            if (seen[origin] == 0) dfs(origin);
        }
        printf("%d\n", total);
    }
    return 0;
}

