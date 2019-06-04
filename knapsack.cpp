#include <cstdio>
#include <vector>
#include <cstring>
#include <iostream>
using namespace std;

struct item {
    int w;
    int v;
} it;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'

item knapsack[2010];
int value[2010][2010];
vector<int> items;

int main() {
    int C, n;
    while (scanf("%d %d", &C, &n) == 2) {
        memset(knapsack, 0, sizeof knapsack);
        memset(value, 0, sizeof value);
        items.clear();
        for (int i=0; i<n; i++) {
            scanf("%d %d", &it.v, &it.w);
            knapsack[i] = it;
        }

        for (int j=0; j<=C; j++) {
            value[0][j] = (knapsack[0].w <= j) ? knapsack[0].v : 0;
        }

        for (int i=1; i<n; i++) {
            for (int j=1; j<=C; j++) {
                if (knapsack[i].w > j) {
                    value[i][j] = value[i-1][j];
                } else {
                    value[i][j] = max(knapsack[i].v + value[i-1][j-knapsack[i].w], value[i-1][j]);
                }
            }
        }
        /* for (int i=0; i<n; i++) { */
        /*     for (int j=0; j<=C; j++) { */
        /*         printf("%d ", value[i][j]); */
        /*     } */
        /*     printf("\n"); */
        /* } */

        for (int i=n-1, j=C; i >=0 && j > 0; i--) {
            /* debug(i); */
            /* debug(j); */
            if (value[i][j] != value[i-1][j]) {
                items.push_back(i);
                j -= knapsack[i].w;
            }
        }
        printf("%d\n", (int) items.size());
        for (int i: items) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}

