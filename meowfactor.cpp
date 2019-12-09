#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long L;

int main() {
    L n;
    scanf("%lld", &n);
    for (L i=(L)powl(n, 1.0/9)+1; i>0; i--) {
        if (n % (L) powl(i, 9) == 0) {
            printf("%lld\n", i);
            return 0;
        }
    }
    return 0;
}

