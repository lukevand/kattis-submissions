#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debugvii(X) for(auto const& CCC:X) std::cerr<<CCC.first<<', '<<CC.second << '\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'


int v[10000];
bitset<10001> seen;

int main()
{
    int n;
    int x;
    int diff;
    while (scanf("%d:", &n), n) {
        seen.reset();
        memset(v, 0, sizeof v);
        for (int i=0;i<n;i++) {
            scanf("%d", &x);
            v[i] = x;
        }
        seen.reset();
        for (int i=0; i < n-1; i++) {
            for (int j=i+1; j < n; j++) {
                seen.set(v[i], 1);
                diff = v[j] - v[i];
                debug(diff);
            }
        }
        printf("yes\n");
done:
        ;
    }


    return 0;
}

