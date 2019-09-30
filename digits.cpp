#include <bits/stdc++.h>
using namespace std;

typedef long long L;

int c;
L n;

int main() {
    /* while (scanf("%lld", &n)) { */
    for (L i = 1000000; i < 100000000; i+= 1) {
        n = i;
        c = 1;
        if (n == 1) { printf("1\n"); continue; }
        for (;;) {
            c++;
            n = (L) floor(1+log10((double)n));
            if (n == 1) break;
        }
        printf("%lld %d\n", i, c);
    }
    return 0;
}

