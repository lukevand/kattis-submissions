#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'

int N;
int fruits[40];
unsigned long long total;
int sum = 0;

int brute()
{
    /* int N; */
    /* int fruits[40]; */
    /* scanf("%d", &N); */
    /* for (int i=0; i<N; i++) { */
    /*     scanf("%d", &fruits[i]); */
    /* } */
    ll limit = 1LL<<N;
    /* debug(limit); */
    ll tot = 0;
    for (ll i=1; i<limit; i++) {
        ll su = 0;
        for (ll j=0; j<N; j++) {
            if (i & (1<<j)) {
                su += fruits[j];
            }
        }
        if (su >= 200) {
            tot += su;
        }
    }
    printf("%lld\n", tot);

    return 0;
}

int main()
{
    /* brute(); */
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d", &fruits[i]);
        sum += fruits[i];
    }
    total = (1L << (N-1)) * sum;
    for (int i=0; i<N; i++) {
        if (fruits[i] < 200) {
            total -= fruits[i];
        }
    }
    for (int i=1; i<N; i++) {
        for (int j=0;j<i; j++) {
            if (fruits[i]+fruits[j] < 200) {
                total -= fruits[i]+fruits[j];
            }
        }
    }
    for (int i=2; i<N; i++) {
        for (int j=1;j<i; j++) {
            for (int k=0;k<j; k++) {
                if (fruits[i]+fruits[j]+fruits[j] < 200) {
                    total -= fruits[i]+fruits[j]+fruits[k];
                }
            }
        }
    }
    printf("%llu\n", total);
    brute();



    return 0;
}
