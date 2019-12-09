#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main()
{
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
            a = abs(v[i] - v[i-1]);
            if (a <= n-1) {
                d[a] = 1;
            }
        }
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

