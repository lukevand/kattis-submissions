#include <bits/stdc++.h>
using namespace std;

typedef long long L;

int main() {
    L n, d, a;
    scanf("%d %d", &n, &d);
    unordered_map<L,L> m;
    for (L i=0; i<n; i++) {
        scanf("%d", &a);
        m[a/d] += 1;
    }
    L re = 0;
    for (auto p: m) {
        if (p.second > 1) {
            re += p.second*(p.second-1)/2;
        }
    }
    printf("%lld\n", re);

    return 0;
}

