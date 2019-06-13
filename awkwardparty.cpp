#include <bits/stdc++.h>
using namespace std;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugp(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';

int main()
{
    map<int, int> seen;
    int n;
    int x;
    int best = INT_MAX;
    map<int,int>::iterator it;
    scanf("%d", &n);
    ++n;
    for (int i=1; i< n; i++) {
        scanf("%d", &x);
        it = seen.find(x);
        if (it != seen.end()) {
            best = min(i - it->second, best);
        }
        seen.insert(make_pair(x, i));

    }
    printf("%d\n", (best == INT_MAX) ? n-1 : best);

    return 0;
}

