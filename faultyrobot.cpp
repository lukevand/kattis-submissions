#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugv(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';
#define debugapair(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << '(' << X[_i].first << ',' << X[_i].second << ')' << " "; cout << '\n';

typedef pair<int,int> ii;
typedef vector<int> vi;

vector<bool> visted;
#define VISTED 1
int c;
vector<vi> Gforce;
vector<vi> slip;

void bfs()
{
    queue<int> q;
    q.push(1);
    visted[1] = true;
    while (!q.empty()) {
        int head = q.front();
        q.pop();
        for (int v: Gforce[head]) {
            q.push(v);

/* void dfs(int v, bool used_skip) */
/* { */
/*     /1* printf("In %d\n", v); *1/ */
/*     if (visted[v] == VISTED) { */
/*         return; */
/*     } */
/*     visted[v] = VISTED; */
/*     for (int u: slip[v]) { */
/*         /1* debug(visted[u]); *1/ */
/*         /1* debug(used_skip); *1/ */
/*         if (!used_skip) { */
/*             dfs(u, true); */
/*         } */
/*     } */
/*     for (int u: Gforce[v]) { */
/*         dfs(u, used_skip); */
/*     } */
/*     /1* debug(Gforce[v].size()); *1/ */
/*     if (Gforce[v].empty()) { */
/*         c++; */
/*     } */
/*     /1* printf("out %d\n", v); *1/ */
/* } */

int main()
{
    int n, m;
    int a, b;
    scanf("%d %d", &n, &m);
    visted.assign(n+1, false);
    Gforce.assign(n+1, vi());
    slip.assign(n+1, vi());
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
    dfs(1, false);
    printf("%d\n", c);

    return 0;
}

