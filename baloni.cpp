#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define debugp(X) for(auto const& CCC:X) std::cout<<CCC<<' '; cout<<'\n';
#define debug(XXX) cout << #XXX << ": " << XXX << '\n'

int main()
{
    int n, a;
    vi v;
    vi hist;
    int c= 0;
    int maxs=0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &a);
        v.push_back(a);
        maxs = max(a, maxs);
    }
    hist.assign(maxs+1, 0);
    for (int i: v) {
        /* debugp(hist); */
        if (hist[i] > 0) {
            hist[i]--;
            hist[i-1]++;
        } else {
            hist[i-1]++;
            c++;
        }
    }
    printf("%d\n", c);
    return 0;
}

