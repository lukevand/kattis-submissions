#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugp(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';

int main()
{
    cin.sync_with_stdio(false);
    string s;
    cin >> s;
    int S[52];
    int best = -1;
    for (int i=0; i<(int)s.length(); i++) {
        S[i] = 1;
    }
    for (int i=0; i<(int)s.length(); i++) {
        for (int j=0; j<i; j++) {
            if (s[j] < s[i]) {
                S[i] = max(S[i], S[j]+1);
            }
        }
        best = max(best, S[i]);
    }
    cout << 26 - best << '\n';

    return 0;
}

