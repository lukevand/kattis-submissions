#include <bits/stdc++.h>
using namespace std;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugv(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';
#define debugapair(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << '(' << X[_i].first << ',' << X[_i].second << ')' << " "; cout << '\n';

#define MAX_W 12005
#define MAX_N 22

int A[MAX_N];
int dp[MAX_N][MAX_W];

int main()
{
    int n;
    while (scanf("%d", &n), n) {
        int sum = 0;
        memset(A, 0, sizeof A);
        memset(dp, 0, sizeof dp);
        for (int i=1; i<=n; i++) {
            scanf("%d", &A[i]);
            sum += A[i];
        }
        int limit = sum/2;

        for (int i=1; i<=n; i++) {
            for (int j=100; j<=limit; j++) {
                if (A[i] > j) {
                    dp[i][j] = dp[i-1][j];
                } else {
                    dp[i][j] = max(dp[i-1][j], A[i] + dp[i-1][j-A[i]]);
                }
            }
        }
        int a = dp[n][limit];
        int b = sum-dp[n][limit];
        printf("%d %d\n", max(a,b), min(a,b));
    }

    return 0;
}

