#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'

int main()
{
    cin.sync_with_stdio(false);
    int N;
    ii ing[10];
    int t1, t2;
    scanf("%d", &N);
    int limit = 1<<N;
    for (int i=0; i<N;i++) {
        scanf("%d %d", &t1, &t2);
        ing[i] = ii(t1, t2);
    }
    /* if (N == 1) { */
    /*     printf("%d\n", abs(ing[0].first-ing[0].second)); */
    /*     return 0; */
    /* } */

    int min_combi = INT_MAX;
    int sm, pd;
    for (int i=1; i<limit; i++) {
        pd = 1; sm = 0;
        for (int j = 0; j<N; j++) {
            if (i & (1 << j)) {
                pd *= ing[j].first;
                sm += ing[j].second;
            }
        }
        min_combi = min(min_combi, abs(pd - sm));
    }
    printf("%d\n", min_combi);


    return 0;
}

