#include <bits/stdc++.h>
using namespace std;

#define INF 1e17

typedef pair<int, int> ii;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'

long long straightaway[255]; // Length of ith straightaway
ii curves[255];
long long memo[515][515];
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
    /* int tmp1, tmp2; */

    scanf("%d %d", &n, &m);
    scanf("%d %d", &k, &r);
    m += 1;
    for (int i=0; i<n; i++) {
        scanf("%lld", &straightaway[i]);
    }
    for (int i=0; i<n-1; i++) {
        int s, c;
        scanf("%d %d", &s, &c);
        curves[i] = ii(s, c);
    }

    memo[1][0] = 0;

    for (int i=2;i<m; i++) {
        memo[i][0] = INF;
    }

    long long best;
    for (int position=1; position<2*n+1; position+=2) {
        /* debug(position/2); */
        for (int lane=1; lane<m; lane++) {
            best = INF;
            for (int prev=1; prev<m; prev++) {
                int change = abs(lane-prev)*r;
                /* debug(change*k); */
                if (change+k <= straightaway[position/2]) {
                    best = min(best, change+memo[prev][position-1]);
                }
                memo[lane][position] = min(best, memo[lane][position-1]) + straightaway[position/2];
                /* memo[lane][position] = (best < INF) ? best : INF; */
            }
        }

        if (position/2 >= n-1) break;
        for (int lane=1; lane<m; lane++) {
            memo[lane][position+1] = memo[lane][position] + curves[position/2].first + curves[position/2].second*lane;
        }
    }
    /* pp(); */
    printf("%lld\n", memo[1][2*n-1]);


    return 0;
}

