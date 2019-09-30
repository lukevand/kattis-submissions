#include <bits/stdc++.h>
using namespace std;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugv(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';
#define debugapair(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << '(' << X[_i].first << ',' << X[_i].second << ')' << " "; cout << '\n';

int main()
{
    int A[1005];
    int diffs[1005];
    int s, n, m;
    int count;
    scanf("%d %d %d", &s, &n, &m);
    for (int i=0; i<s; i++) {
        scanf("%d", &A[i]);
    }
    debuga(A, 0, 20);
    int j=0;
    for (int i=0; i<s-1; ++i) {
        count = 1;
        while (i < s-1 && A[i] < A[i+1]) {
            ++count;
            ++i;
        }
        diffs[j] = count;
        count = 1;
        ++j;
        while (i < s-1 && A[i] > A[i+1]) {
            ++count;
            ++i;
        }
        diffs[j] = -(count-1);
        ++j;
    }
    if (diffs[0] > 0) {
        --diffs[0];
    } else {
        ++diffs[1];
    }
    /* if (diffs[j-1] < 0) { */

    int inc=0, dec=0;
    for (int i=0; i<j-1; i++) {
        debug(diffs[i]);
        if (diffs[i] >= n-1 && diffs[i+1] <= -(n-1)) {
            ++inc;
        } else if (diffs[i] <= m-1 && diffs[i+1] >= -(m-1)) {
            dec++;
        }
    }
    printf("%d %d\n", inc, dec);
    debuga(diffs, 0, 20);
    /* for (int i=0; i<s; i++) { */
    /*     diffs[i] = A[i] < A[i+1]; */
    /* } */

    return 0;
}

