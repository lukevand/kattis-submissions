#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugp(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';

int dragon[20001];
int knight[20001];

int main()
{
    int n, m;
    int cost;
    while (scanf("%d %d", &n, &m), n | m) {
        cost = 0;
        memset(dragon, 0, sizeof dragon);
        memset(knight, 0, sizeof knight);
        for (int i=0; i<n;i++) scanf("%d", &dragon[i]);
        for (int i=0; i<m;i++) scanf("%d", &knight[i]);
        sort(dragon, dragon+n);
        sort(knight, knight+m);
        int i=0, j=0;
        while (i<n && j<m) {
            if (dragon[i] <= knight[j]) {
                cost += knight[j];
                i++;
            }
            j++;
        }
        if (i < n && j==m) {
            printf("Loowater is doomed!\n");
        } else {
            printf("%d\n", cost);
        }
    }
    return 0;
}

