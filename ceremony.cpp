#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugv(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';
#define debugapair(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << '(' << X[_i].first << ',' << X[_i].second << ')' << " "; cout << '\n';

int A[1000005];

/* int memo[100090]; */

/* int f(int i, int c, int d) */
/* { */
/*     if (i == 0) */
/*         return c+d; */

/*     if (A[i] - c == 1) { */
/*         return f(i-1, c+1, d); */
/*     } */
/*     if (A[i] - c <= 0) { */
/*         return f(i-1, c, d); */
/*     } */
/*     else { */
/*         return min(f(i-1, A[i]-c, d), f(i-1, c, d+1)); */
/*     } */
/* } */

int main()
{
    int n;
    scanf("%d", &n);
    for (int i=0;i<n; i++) {
        scanf("%d", &A[i]);
    }
    sort(A, A+n);
    int c=0;
    int d=0;
    int height;
    for (int i=0; i<n; i++) {
        height = A[i] - c;
        /* debug(height); */
        /* debug(A[i+height]); */
        /* debug(A[height]); */
        if (height <= 0) {
            continue;
        } else if (height == 1) {
            c++;
        } else if (i+height < n && A[i+height] == A[height]) {
            c += height;
        } else {
            d++;
        }
    }
    /* debug(c); */
    /* debug(d); */
    printf("%d\n", c+d);
    /* cout << f(n-1, 0, 0) << endl; */
    return 0;
}

