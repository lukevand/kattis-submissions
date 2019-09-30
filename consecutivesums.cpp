#include <bits/stdc++.h>
using namespace std;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugv(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';
#define debugapair(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << '(' << X[_i].first << ',' << X[_i].second << ')' << " "; cout << '\n';

int main()
{
    int T, S;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &S);
        bool done = false;
        int lim = sqrt(2*S)+1;
        for (int n=2; n<lim && !done; n++) {
            int top = 2*S + n*(1-n);
            int bottom = 2*n;
            if ((top % bottom) != 0 || top <= 0) {
                continue;
            }
            int a = top/bottom;
            int summ1 = n*(n-1)/2;
            if (n*a + summ1 == S) {
                printf("%d =", S);
                for (int j=0; j<n; j++) {
                    printf(" %d %c", a+j, (j<n-1) ? '+' : '\n');
                }
                done = true;
            }
        }
        if (!done) {
            printf("IMPOSSIBLE\n");
        }
    }

    return 0;
}

