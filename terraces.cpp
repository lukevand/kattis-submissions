#include <bits/stdc++.h>
using namespace std;

typedef vector<int> VI;
typedef vector<VI> VVI;

int x, y;
int c;
bool seen[501][501];
int graph[501][501];
bool hasLower[1002];

int di[] = {1,0,0,-1};
int dj[] = {0,1,-1,0};

void dfs(int i, int j) {
    if (i < 0 || i >= y || j < 0 || j >= x) {
        return;
    }
    seen[i][j] = true;
    for (int d = 0; d < 4; d++) {
        int nexti = i+di[d];
        int nextj = j+dj[d];
        if (0<=nexti&&nexti<y && 0<=nextj&&nextj<x && graph[nexti][nextj] < graph[i][j]) {
            hasLower[graph[i][j]] = true;
        }
        if (!seen[nexti][nextj] && graph[nexti][nextj] == graph[i][j]) {
            dfs(nexti, nextj);
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

