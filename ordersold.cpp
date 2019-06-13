#include <bits/stdc++.h>
using namespace std;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'

int n, m;
int cost[105]; // Cost of each item on menu
int S[102][30005]; // optimal solution
int orders[1010];
int maxorder = -1;

void ptable(int cap) {
    vector<int> result;
    for (int i=n-1, j=cap; i >= 0 && j > 0; ) {
        /* debug(S[i][j]); */
        if (i > 0 && S[i][j] != S[i-1][j]) { // move left
            result.push_back(i+1);
            j -= cost[i];
        } else if (i == 0) {
            result.push_back(i+1);
            j -= cost[i];
        } else { // move up
            i--;
        }
    }

    sort(result.begin(), result.end());
    for (int pp: result) {
        printf("%d ", pp);
    }
    printf("\n");
}

int main()
{
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &cost[i]);
    }

    scanf("%d", &m);
    for (int i=0; i<m; i++) {
        scanf("%d", &orders[i]);
        maxorder = max(maxorder, orders[i]);
    }
    maxorder++;

    // Make knapsack table
    for (int j=1; j<maxorder; j++) {
        S[0][j] = (j%cost[0]==0) ? 1 : 0;
    }

    for (int i=1; i<n; i++) {
        for (int j=1; j<maxorder; j++) {
            if (j % cost[i] == 0) {
                S[i][j] = 1 + S[i-1][j];
            } else if (cost[i] > j) {
                S[i][j] = S[i-1][j];
            } else {
                S[i][j] = S[i][j-cost[i]] + S[i-1][j];
            }
        }
    }

    /* for (int i=0; i<n; i++) { */
    /*     /1* printf("%d", S[i][maxorder-1]); *1/ */
    /*     for (int j=maxorder-10; j<maxorder; j++) { */
    /*         printf("%d ", S[i][j]); */
    /*     } */
    /*     printf("\n"); */
    /* } */
    /* printf("\n"); */
    /* debugp(orders); */

    // trace back though table
    for (int k=0; k<m; k++) {
        int start = S[n-1][orders[k]];
        /* debug(start); */
        switch (start) {
            case 0:
                printf("Impossible\n");
                break;
            case 1:
                ptable(orders[k]);
                break;
            default:
                printf("Ambiguous\n");
                break;
        }
    }

    return 0;
}
