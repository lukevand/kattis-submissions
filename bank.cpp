#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';

int main()
{
    int N, T;
    int t;
    ll money[49];
    ll amount, old;
    memset(money, 0, sizeof money);
    scanf("%d %d", &N, &T);
    while (N--) {
        scanf("%lld %d", &amount, &t);
        for (int i=t; amount>0 && i>=0; i--) {
            old = money[i];
            money[i] = max(amount, old);
            amount = min(amount, old);
        }
    }
    /* debuga(money, 0, 49); */
    ll re = 0;
    for (int i=0; i<T; i++) {
        re += money[i];
    }
    printf("%lld\n", re);


    return 0;
}

