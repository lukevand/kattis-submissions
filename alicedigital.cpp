#include <bits/stdc++.h>
using namespace std;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugp(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'

int A[100010];
vector<int> sums;
vector<int> lt;


int main()
{
    int datasets;
    int n, m;

    scanf("%d", &datasets);
    while (datasets--) {
        /* printf("\n"); */
        lt.clear();
        lt.push_back(-1);
        memset(A, 0, sizeof A);
        scanf("%d %d", &n, &m);
        for (int i=0; i<n; i++) {
            scanf("%d", &A[i]);
            if (A[i] < m) {
                lt.push_back(i); // remember index of < m
            }
        }

        lt.push_back(n);
        vector<int> store;
        int best = 0;
        /* debugp(lt); */
        for (int i=0; i< (int)lt.size()-1; i++) {
            store.clear();
            bool seen_m = false;
            int sum = 0;
            /* debug(lt[i]); */
            /* debug(lt[i+1]); */
            if (lt[i+1]-lt[i] == 1) continue;
            for (int j=lt[i]+1; j < lt[i+1]; j++) {
                /* debug(j); */
                /* debug(A[j]); */
                /* debug(sum); */
                if (A[j] == m) {
                    store.push_back(sum);
                    sum = 0;
                    seen_m = true;
                } else {
                    sum += A[j];
                }
            }
            if (seen_m) {
                store.push_back(sum);
            }
            /* debugp(store); */
            for (int j=0; j<(int)store.size()-1; j++) {
                best = max(best, store[j]+store[j+1]);
            }
        }
        printf("%d\n", best+m);

    }
    return 0;
}

