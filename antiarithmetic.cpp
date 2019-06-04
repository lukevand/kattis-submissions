#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debugvii(X) for(auto const& CCC:X) std::cerr<<CCC.first<<', '<<CC.second << '\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'


int v[10000];
bitset<10001> seen;

// a1 - a2 = c && a2 - a3 = c => a3 = 2*a2 - a1
int main()
{
    int n;
    while (scanf("%d:", &n), n) {
        memset(v, 0, sizeof v);
        seen.reset();
        bool done=false;
        for (int i=0; i<n;i++) {
            scanf("%d", &v[i]);
            if (done) continue;
            seen.set(v[i], 1);
            for (int j=0, testn; !done && j < i; j++) {
                testn = 2*v[i] - v[j];
                if (0 <= testn && testn < n && !seen.test(testn)) {
                    done=true;
                    break;
                }
            }
        }
        printf("%s\n", (done ? "no" : "yes"));
    }

    return 0;
}

