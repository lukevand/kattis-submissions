#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debugvii(X) for(auto const& CCC:X) std::cerr<<CCC.first<<', '<<CC.second << '\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'

int main()
{
    int N, S, R, x;
    bitset<10> broken, reserve;
    scanf("%d %d %d", &N, &S, &R);
    while (S--) {
        scanf("%d", &x);
        broken.set(x);
    }
    while (R--) {
        scanf("%d", &x);
        reserve.set(x);
    }
    debug(broken);
    debug(reserve);

    return 0;
}

