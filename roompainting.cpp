#include <bits/stdc++.h>
using namespace std;

typedef long long L;

int n, m;
int need;
int a;
L waste = 0;
set<int> avail;

int main()
{
    scanf("%d %d", &n, &m);
    for (int i=0; i<n; i++) {
        scanf("%d", &a);
        avail.insert(a);
    }
    for (int i=0; i<m; i++) {
        scanf("%d", &need);
        waste += *avail.lower_bound(need) - need;
    }
    printf("%lld\n", waste);
    return 0;
}

