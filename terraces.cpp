#include <bits/stdc++.h>
using namespace std;

typedef vector<int> VI;
typedef vector<VI> VVI;

int x, y;
int c = 0;
bool seen[501][501];
int graph[501][501];
bool hasLower[1002];

int di[] = {1,0,0,-1};
int dj[] = {0,1,-1,0};

int dfs(int i, int j) {
    seen[i][j] = true;
    for (int d = 0; d < 4; d++) {
        int ii = i+di[d];
        int jj = j+dj[d];
        if (ii < 0 || ii >= y || jj < 0 || jj >= x) {
            continue;
        }
        if (graph[i][j] > graph[ii][jj]) {
            hasLower[graph[ii][jj]] = true;
        }
    }
}



int main() {
    memset(hasLower, false, sizeof hasLower);
    scanf("%d %d", &x, &y);
    for (int i=0; i<y; i++) {
        for (int j=0; j<x; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    for (int i=0; i<y; i++) {
        for (int j=0; j<x; j++) {
            if (!seen[i][j]) {
                dfs(i, j);
            }
        }
    }
    printf("%d\n", c);
    return 0;
}

