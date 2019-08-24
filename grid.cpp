#include <bits/stdc++.h>

using namespace std;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugv(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';
#define debugapair(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << '(' << X[_i].first << ',' << X[_i].second << ')' << " "; cout << '\n';

typedef vector<int> vi;
typedef pair<int,int> ii;

int d[505][505];
int A[505][505];

int main()
{
    cin.sync_with_stdio(false);

    int n, m;
    scanf("%d %d", &n, &m);
    /* int A[n][m]; */
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            char c;
            scanf(" %c", &c);
            A[i][j] = c-'0';
        }
    }

    memset(d, -1, sizeof(d));
    d[0][0] = 0;
    queue<ii> q;
    q.push(ii(0,0));
    int i, j, jump;

    while (!q.empty()) {
        ii p = q.front(); q.pop();
        i = p.first;
        j = p.second;
        jump = A[i][j];
        if ( i == n-1 && j == m-1) {
            break;
        }
        if (i + jump < n && d[i+jump][j] == -1) {
                d[i+jump][j] = d[i][j] + 1;
                q.push(ii(i+jump, j));
        }
        if (i - jump >= 0 && d[i-jump][j] == -1) {
                d[i-jump][j] = d[i][j] + 1;
                q.push(ii(i-jump, j));
        }
        if (j + jump < m && d[i][j+jump] == -1) {
                d[i][j+jump] = d[i][j] + 1;
                q.push(ii(i, j+jump));
        }
        if (j - jump >= 0 && d[i][j-jump] == -1) {
                d[i][j-jump] = d[i][j] + 1;
                q.push(ii(i, j-jump));
        }
    }
    int re = d[n-1][m-1];
    printf("%d\n", re);

    return 0;
}

