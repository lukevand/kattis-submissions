#include <bits/stdc++.h>
using namespace std;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debugvii(X) for(auto const& CCC:X) std::cerr<<CCC.first<<', '<<CC.second << '\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'


int main()
{
    cin.sync_with_stdio(false);
    int R;
    vector<string> recital;
    string s;
    cin >> R;

    for (int i=0; i<R; i++) {
        cin >> s;
        recital.push_back(s);
    }
    sort(begin(recital), end(recital));
    int m = INT_MAX;
    int overlap;
    do {
        overlap = 0;
        for (int i=0; i<R-1; i++) {
            for (char c: recital[i]) {
                if (recital[i+1].find(c) != string::npos) {
                    ++overlap;
                }
            }
        }
        m = min(m, overlap);
    } while (next_permutation(begin(recital), end(recital)));
    cout << m << '\n';

    return 0;
}

