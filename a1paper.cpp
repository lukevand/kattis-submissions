#include <bits/stdc++.h>
using namespace std;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debugvii(X) for(auto const& CCC:X) std::cerr<<CCC.first<<', '<<CC.second << '\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';

int paper[35];
int n;

double length(int nn) {
    return pow(2, 0.25 - nn/2.0);
}

int main()
{
    scanf("%d", &n);
    for (int i=2; i<n+3; i++) {
        scanf("%d", &paper[i]);
    }
    double re = 0;
    int need = 2;
    bool done = false;
    for (int i=2; i<n+3 && !done; i++) {
        /* debug(re); */
        if (paper[i] >= need) {
            re += length(i)*(need>>1);
            done = true;
        } else {
            re += length(i)*(need>>1);
            need -= paper[i];
            need *= 2;
        }
    }

    if (!done) {
        printf("impossible\n");
    } else {
        printf("%.11f\n", re);
    }
    return 0;
}

