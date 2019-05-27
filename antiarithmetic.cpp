#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main()
{
    int n;
    int a;
    int b;
    int bcount;
    while (scanf("%d:", &n), n) {
        vi v;
        vi tried;
        tried.assign(2*n, 0);
        for (int i=0;i<n;i++) {
            scanf("%d", &a);
            v.push_back(a);
        }
        bcount=0;
        for (int i=0; i < n-2; i++) {
            for (int j=i+1; j < n-1; j++) {
            b = v[i]-v[j];
            if (tried[b+n]) {
                break;
            }
                for (int k=j+1; k<n; k++) {
                    if (b == v[j]-v[k]) {
                        printf("no\n");
                        printf("%d %d %d\n", i, j, k);
                        goto done;
                    }
                }
                tried[b+n] = 1;
            }
        }
        printf("yes\n");
done:
        ;
    }


    return 0;
}

