#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debugvii(X) for(auto const& CCC:X) std::cerr<<CCC.first<<', '<<CC.second << '\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'

int seq[200];
int tab[200];
int previndex[200];
stack<int> stac;

int main()
{
    int n;
    int m, localmin, bestprev;
    int k, top;
    while (scanf("%d", &n), n) {
        memset(seq, 0, sizeof seq);
        memset(previndex, 0, sizeof previndex);
        memset(tab, 0, sizeof tab);
        for (int i=0; i<n; i++) {
            scanf("%d", &seq[i]);
            previndex[i] = i;
        }

        tab[0] = 1;

        for (int i=1; i<n; i++) {
            m = 1; // default if nothing found
            localmin = INT_MAX;
            bestprev = i;
            for (int j=0; j<i; j++) {
                if (seq[j] < seq[i] && tab[j]+1 >= m) {
                    if (seq[j] < localmin || tab[j] >= m) {
                        localmin = seq[j];
                        bestprev = j;
                    }
                    m = tab[j]+1;
                }
            }
            tab[i] = m;
            previndex[i] = bestprev;
        }
        /* for (int i=0; i < n; i++) { */
        /*     cout << tab[i] << ' '; */
        /* } */
        /* cout << '\n'; */
        /* for (int i=0; i < n; i++) { */
        /*     cout << previndex[i] << ' '; */
        /* } */
        /* cout << '\n'; */

        printf("%d ", tab[n-1]);
        k=n-1;
        while (k != previndex[k]) {
            stac.push(seq[k]);
            k = previndex[k];
        }
        stac.push(seq[k]);
        while (!stac.empty()) {
            top = stac.top();
            stac.pop();
            printf("%d%c", top, (stac.empty()) ? '\n' : ' ');
        }
    }
    return 0;
}

