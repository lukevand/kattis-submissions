#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> II;
typedef vector<int> VI;
typedef vector<VI> VVI;

int visted[1001][1001];
int c = 0;
VVI Gforce;
VVI slip;

int main()
{
    int n, m;
    int a, b;
    scanf("%d %d", &n, &m);
    Gforce.assign(n+1, VI());
    slip.assign(n+1, VI());
    int gforcec = 0;
    for (int i=0; i<m; i++) {
        scanf("%d %d", &a, &b);
        if (a < 0) {
            Gforce[-a].push_back(b);
            gforcec++;
        } else {
            slip[a].push_back(b);
        }
    }
    queue<II> q;
    for (int v : Gforce[1]) {
        q.push(II(v, 0));
        visted[v][0] = 1;
    }
    for (int v : slip[1]) {
        q.push(II(v, 1));
        visted[v][1] = 1;
    }
    while (!q.empty()) {
        bool doneSomething = false;
        II p = q.front(); q.pop();
        printf("%d %d\n", p.first, p.second);
        if (visted[p.first][p.second]) {
            continue;
        }
        visted[p.first][p.second] = 1;
        if (p.second == 1) { //used slip
            for (int v : Gforce[p.first]) {
                q.push(II(v, 1));
                doneSomething = 1;
            }
        } else {
            for (int v : Gforce[p.first]) {
                q.push(II(v, 0));
                doneSomething = 1;
            }
            for (int v : slip[p.first]) {
                q.push(II(v, 1));
                doneSomething = 1;
            }
        }
        if (!doneSomething) {
            c++;
        }
    }

    printf("%d\n", c);

    return 0;
}

