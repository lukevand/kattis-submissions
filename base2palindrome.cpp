#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>

using namespace std;
typedef long long ll;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugv(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';

bool isbinpalinb(int n)
{
    int digits = (int) log2(n) +1;
    int re = 0;
    for (int i=0; i<digits/2; i++, n /= 2) {
        if (n%2) {
            re += (1 << (digits/2 - (1 + i)));
        }
    }
    if (digits%2 == 1) n /= 2;
    return re == n;
}

bool isbinpalin(int n)
{
    int digits = (int) log2(n) +1;
    int mid = (digits%2 == 0) ? digits/2 : digits/2+1;
    for (int i=0; i<mid; i++) {
        if (((n>>i)&1) != ((n>>(digits-1-i))&1)) {
            return false;
        }
    }
    return true;
}


int main()
{
    cin.sync_with_stdio(false);
    int M;
    int count=0;
    scanf("%d", &M);
    for (int i=1; ; i++) {
        if (isbinpalin(i)) {
            /* debug(i); */
            ++count;
            if (count == M) { printf("%d\n", i); break; }
        }
    }

    return 0;
}

