#include <bits/stdc++.h>
using namespace std;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debugvii(X) for(auto const& CCC:X) std::cerr<<CCC.first<<', '<<CCC.second << '\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'

int main()
{
    cin.sync_with_stdio(false);
    int N, M;
    pair<int, int> ingredient[410];
    int tmp1, tmp2;
    scanf("%d %d", &N, &M);
    int ceil = 2<<(N-1);
    int state = ceil;
    for (int j=0; j<M; j++) {
        scanf("%d %d", &tmp1, &tmp2);
        tmp1--;
        tmp2--;
        ingredient[j] = pair<int, int>(tmp1, tmp2);
    }


    /* sort(ingredient, ingredient+M); */
    for (int i=0; i < ceil; i++) {
        for (int j=0; j<M; j++) {
            if ((i & (1<<ingredient[j].first) && i & (1<<ingredient[j].second))) {
                state--;
                break;
            }
        }
    }
    printf("%d\n", state);
    return 0;
}
