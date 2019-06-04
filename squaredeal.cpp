#include <bits/stdc++.h>
using namespace std;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'

int main()
{
    cin.sync_with_stdio(false);
    int n = 1 << 3;
    pair<int,int> rect[3];
    int tmp1, tmp2;
    for (int i=0; i<3; i++) {
        scanf("%d %d", &tmp1, &tmp2);
        rect[i] = pair<int,int>(tmp1, tmp2);
    }
    do {
        for (int i=1; i<n; i++) {
            int s=0;
            for (int j=0; j < 3; j++) {
                if (i & (1<<j)) {
                ;
            }
        }
    } while (next_permutation(rect, rect+3));


    return 0;
}

