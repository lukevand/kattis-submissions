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
    cin.sync_with_stdio(false);
    int N, P, a, m=0, best=0;
    cin >> N >> P;
    while (N--) {
        cin >> a;
        a -= P;
        m = max(m+a, a);
        best = max(m, best);
    }
    cout << best << '\n';

    return 0;
}

