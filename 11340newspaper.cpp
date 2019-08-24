#include <bits/stdc++.h>

using namespace std;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugv(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';
#define debugapair(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << '(' << X[_i].first << ',' << X[_i].second << ')' << " "; cout << '\n';

long long d[200];

int main()
{
    int N, K, M;
    int a;
    char ch;
    int c;
    map<char,int> value;
    scanf("%d", &N);
    while (N--) {
        memset(d, 0, sizeof d);
        value.clear();
        scanf("%d", &K);
        while (K--) {
            scanf(" %c %d", &ch, &a);
            value.insert(pair<char,int>(ch, a));
        }
        scanf("%d", &M);
        M++;
        while (M--) {
            while ((c = getc(stdin)) != '\n') {
                d[c] += 1;
            }
        }
        map<char,int>::iterator it;
        long long x=0;
        /* debuga(d, 65, 150); */
        for (it=value.begin(); it!=value.end(); ++it) {
            /* debug(it->first); */
            /* debug(d[(int)it->first]); */
            x += d[(int)it->first]*it->second;
        }
        printf("%lld.%02lld$\n", x/100, x%100);

    }

    return 0;
}

