#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugp(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';

int C[1003];
int memo[1003][1003];
int N;

int solve(int i, int j)
{
    printf("%d %d: %d\n", i, j, C[i]);
    if (i > 2 && j <= 1) {
        return 1000000;
    }
    if (memo[i][j] > 0) {
        return memo[i][j];
    }
    for (int k=2; k<N;k++) {
        if (i+k > N) {
            memo[i][j] = C[i]+solve(i-k, k-1);
            return memo[i][k];
        } else if (i - k < 1) {
            memo[i][j] = C[i]+solve(i+k, k);
            return memo[i][j];
        } else {
            memo[i][j] = C[i]+min(solve(i-k,k-1), solve(i+k,k));
            return memo[i][j];
        }
    }
}



int main()
{
    scanf("%d", &N);
    for (int i=1;i<=N;i++){
        scanf("%d", &C[i]);
    }
    memset(memo, -1, sizeof memo);
    memo[2][1] = C[2];
    memo[1][1] = C[1]+C[2];
    for (int k=1; k<N; k++) {
        solve(N, k);
    }
    /* printf("%d\n", t); */

    return 0;
}

