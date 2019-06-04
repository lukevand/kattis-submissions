#include <bits/stdc++.h>
using namespace std;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debugvii(X) for(auto const& CCC:X) std::cerr<<CCC.first<<', '<<CC.second << '\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'

int main()
{
    cin.sync_with_stdio(false);
    string s;
    getline(cin, s);

    sort(begin(s), end(s));
    next_permutation(begin(s), end(s));
    debug(s);
    return 0;
}

