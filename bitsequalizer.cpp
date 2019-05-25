#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define pp(X) for(auto const& c:X) std::cout<<c<<' '; cout<<'\n';
#define debug(XXX) cout << #XXX << ": " << XXX << '\n'

inline int cc(string s, char ch) {
    int count = 0;
    for (auto c: s) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main()
{
    cin.sync_with_stdio(false);
    int n;
    string S, T;
    int count, diso;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> S >> T;
        count = 0;
        diso = 0;
        for (int j = 0; j < (int)S.length(); j++) {
            if (S[j] == '?') {
                count++;
            } else if (S[j] != T[j]) {
                diso++;
            }
        }
        debug(count);
        debug(diso);
        cout << "Case " << i+1 << ": " << -1 << '\n';
    }



    return 0;
}

    /* int sones = cc(S, '1'); */
    /* int qs = cc(S, '?'); */
    /* int tones = cc(S, '1'); */
    /* if (sones + qs < tones) { */
    /*     cout << "Case " << i+1 << ": " << -1; */
    /* } else { */
