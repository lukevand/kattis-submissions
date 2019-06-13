#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'

struct curve {
    int s;
    int c;
};
int straightaway[255]; // Length of ith straightaway
curve curves[255];
int memo[255][255];
int n, m; // Number of straights, lanes
int k, r; // Lane changing parameters


int curve_distance(curve c, int i) {
    return c.s + c.c*i;
}

/* int re(int i, int po) { */
/*     if (i == 1 && po == 0) { */
/*         return 0; */
/*     } else if (i > 1 && po == 0) { */
/*         return INT_MAX; */
/*     } else { */
/*         int mini = INT_MAX; */
/*         for (int j=1; j<m; j++) { */
/*             debug(mini); */
/*             if (straightaway[po-1] > abs(j-i)*r) { */
/*                 mini = min(straightaway[po-1] + abs(j-i)*r +re(j,po-1), m); */
/*             } */
/*         } */
/*         return mini; */
/*     } */
/* } */


int main()
{
    /* int tmp1, tmp2; */

    scanf("%d %d", &n, &m);
    scanf("%d %d", &k, &r);
    for (int i=0; i<n; i++) {
        scanf("%d", &straightaway[i]);
    }
    for (int i=0; i<n; i++) {
        curve newc;
        scanf("%d %d", &newc.s, &newc.c);
        curves[i] = newc;
        /* curves[i] = curve(tmp1, tmp2); */
    }

    for (int i=0; i<n; i++) {
        printf("s: %d b: %d,%d\n", straightaway[i], curves[i].s, curves[i].c);
    }

    memo[1][0] = 0;

    for (int i=2;i<n; i++) {
        memo[i][0] = INT_MAX;
    }

    /* for (int i=2; i<n; i++) { */
    /*     memo[0][i] = memo[0][i-1] + straightaway + curve_distance(curve.first, curve.second, 1) */
    /* } */

    for (int position=1; position<n; position++) { // for each position
        int mini = INT_MAX;
        for (int lane=1; lane<m; lane++) { // for each lane we start
            for (int end_lane=1; end_lane<m; end_lane++) { // lane we end
                int lanediff = abs(end_lane-lane);
                if (lanediff*k < straightaway[i]) {
                    memo[endlane][position] = memo[endlane][position-1];
                } else {
                    mini = min(memo[position-1][lane] + abs(end_lane-lane)*r, mini);
                }
            memo[lane][endposition] = mini;
            }
        }
        // now change line
    cout << re(1, 4) << '\n';


    return 0;
}

