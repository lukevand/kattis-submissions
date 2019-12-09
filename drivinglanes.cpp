#include <bits/stdc++.h>
using namespace std;

#define INF 1e17

typedef long long L;
typedef pair<int, int> II;
typedef vector<int> VI;
typedef vector<II> VII;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'

vector<L> straightaway; // Length of ith straightaway
VII curves;
vector<vector<L>> memo(515, vector<L>(515));
int n, m; // Number of straights, lanes
int k, r; // Lane changing parameters


void pp() {
    for (int i=0; i<m; i++) {
        for (int j=0; j<2*n; j++) {
            /* printf("%5lld ", (memo[i][j] < 100000) ? memo[i][j] : -1212); */
            printf("%10lld ", memo[i][j]);
        }
        printf("\n");
    }
}



int main()
{
    scanf("%d %d", &n, &m);
    scanf("%d %d", &k, &r);
    m += 1;
    for (int i=0; i<n; i++) {
        L s;
        scanf("%lld", &s);
        straightaway.push_back(s);
    }
    for (int i=0; i<n-1; i++) {
        int s, c;
        scanf("%d %d", &s, &c);
        curves.push_back(II(s, c));
    }

    memo[1][0] = 0L;

    for (int i=2;i<m; i++) {
        memo[i][0] = INF;
    }

    L best;
    for (int position=1; position<=n; position++) {
        for (int lane=1; lane<=m; lane++) {
            best = INF;
            for (int prev=1; prev<=m; prev++) {
                L change = abs(lane-prev)*r;
                if (change+k <= straightaway[position]) {
                    best = min(best, change+memo[prev][position-1]);
                }
                memo[lane][position] = min(best, memo[lane][position-1]) + straightaway[position];
            }
        }

        /* if (position/2 >= n-1) break; */
        for (int lane=1; lane<=m; lane++) {
            memo[lane][position] += curves[position].first + curves[position].second*lane;
        }
    }
    pp();
    printf("%lld\n", memo[1][n-1]);


    return 0;
}

