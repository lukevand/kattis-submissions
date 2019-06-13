#include <bits/stdc++.h>
using namespace std;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'

int A[100010];
vector<int> ms;

int main()
{
    int datasets;
    int n, m;
    scanf("%d", &datasets);
    while (datasets--) {
        memset(A, 0, sizeof A);
        scanf("%d %d", &n, &m);
        for (int i=0; i<n; i++) {
            scanf("%d", &A[i]);
            if (A[i] == m) {
                ms.push_back(i);
            }
        }
        int tot;
        int best = -1;
        for (int i: ms) {
            tot = 0;
            for (int j=i-1; j > -1 && A[j]>m; j--) {
                tot += A[j];
            }
            for (int j=i+1; j < n && A[j]>m; j++) {
                tot += A[j];
            }
            best = max(tot, best);
        }
        printf("%d\n", best+m);

    }
    return 0;
}



