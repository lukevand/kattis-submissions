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
    int n;
    int m;
    int best = -1;
    scanf("%d", &n);
    vi tab;
    tab.assign(n+1, -1);
    for (int i=0; i< n; i++) {
        scanf("%d", &m);
        if (tab[cur] > 0) {
            best = max(i-tab[cur], best);



    return 0;
}

