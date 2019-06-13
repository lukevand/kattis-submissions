#include <bits/stdc++.h>
using namespace std;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'

int main()
{
    int C, S;
    int A[11];

    while (scanf("%d %d", &C, &S) == 2) {
        memset(A, 0, sizeof A);
        for (int i=0; i<S; i++) {
            scanf("%d", &A[i]);
        }
        sort(A, A+(2*C-S));
        for (int i=0; i<C/2; i++) {
            printf("%d %d %d\n", i, A[i]


    return 0;
}

