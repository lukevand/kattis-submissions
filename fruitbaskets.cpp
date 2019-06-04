#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'

int brute()
{
    int N;
    int fruits[40];
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d", &fruits[i]);
    }
    ll limit = 1L<<N;
    debug(limit);
    int tot = 0;
    for (ll i=1; i<limit; i++) {
        int su = 0;
        for (ll j=0; j<N; j++) {
            if (i & (1<<j)) {
                su += fruits[j];
            }
        }
        if (su >= 200) {
            tot += su;
        }
    }
    printf("%d\n", tot);


    return 0;
}

int main()
{
    int N;
    int fruits[40];
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d", &fruits[i]);
    }

    return 0;
}
