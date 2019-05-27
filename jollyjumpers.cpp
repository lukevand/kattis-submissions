#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debugvii(X) for(auto const& CCC:X) std::cerr<<CCC.first<<', '<<CC.second << '\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'

int main()
{
    cin.sync_with_stdio(false);
    int n;
    int m;
    int a;

    while (scanf("%d", &n) == 1) {
        vi v;
        vi d;
        d.assign(n, 0);
        for (int i=0 ;i<n; i++) {
            scanf("%d", &m);
            v.push_back(m);
        }
        for (int i=1; i<n; i++) {
            /* debug(i); */
            /* debugp(d); */
            a = abs(v[i] - v[i-1]);
            /* if (d[a] == 1) { */
            /*     printf("Not jolly\n"); */
            /*     goto done; */
            if (a <= n-1) {
                d[a] = 1;
            }
        }
        /* debugp(v); */
        /* debugp(d); */
        for (int i=1;i<n;i++) {
            if (d[i] == 0) {
                printf("Not jolly\n");
                goto done;
            }
        }
        printf("Jolly\n");

done:
        ;
    }

    return 0;
}

