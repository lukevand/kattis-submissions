#include <bits/stdc++.h>
using namespace std;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debugvii(X) for(auto const& CCC:X) std::cerr<<CCC.first<<', '<<CC.second << '\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'

int papers[35];

double length(int n) {
    return pow(2, 0.25 - n/2.0);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i=2; i<n; i++) {
        scanf("%d", &papers[i+1]);
    }
    return 0;
}

