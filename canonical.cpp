#include <bits/stdc++.h>
using namespace std;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugp(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';

int S[2000001];
/* int G[2000001]; */


int main()
{
    int n;
    scanf("%d", &n);
    int coins[102];
    for (int i=0; i<n;i++){
        scanf("%d", &coins[i]);
    }
    int top = coins[n-1]+coins[n-2]+1;
    S[0] = 0;
    for (int v=1; v<top; v++) {
        int m = INT_MAX;
        for (int i=0; i<n; i++) {
            if (v - coins[i] >= 0) {
                m = min(m, S[v - coins[i]]);
            }
        }
        S[v] = 1+m;
    }
    /* G[0] = 0; */
    for (int v=1; v<top; v++) {
        int vv = v;
        int c=0;
        while (vv > 0) {
            for (int i=n-1; i>=0; i--) {
                if (vv - coins[i] >= 0) {
                    c += vv/coins[i];
                    vv %= coins[i];
                }
            }
        }
        /* G[v] = c; */
        if (S[v] != c) {
            printf("non-canonical\n");
            return 0;
        }
    }
    printf("canonical\n");
    /* debuga(S, 0, top); */
    /* debuga(G, 0, top); */
    /* for (int i=0; i<top; i++) { */
    /*     printf("%d %d %d\n", i, S[i], G[i]); */
    /*     if (S[i]!=G[i]) { */
    /*         printf("non-canonical\n"); */
    /*         break; */
    /*     } */
    /* } */


    return 0;
}

