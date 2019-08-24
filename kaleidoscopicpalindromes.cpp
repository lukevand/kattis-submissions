#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a, b, k;
    int count = 0;
    bool stop;
    vector<int> s(25, 0);
    scanf("%d %d %d", &a, &b, &k);
    for (int i=a; i<=b; i++) {
        stop = false;
        for (int base=2; !stop && base<=k; base++) {
            s.clear();
            int num = i;
            int ix=0;
            for (; num > 0; ix++) {
                s[i] = num%base;
                num /= base;
            }
            printf("%d\n", ix);
            for (int jx=0; jx < ix/2; jx++) {
                if (s[jx] != s[ix-jx]) {
                    stop = true;
                }
            }
        }
        if (!stop) {
            count++;
        }
    }
    printf("%d\n", count);


    return 0;
}

