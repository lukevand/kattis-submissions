#include <bits/stdc++.h>

using namespace std;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugv(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';
#define debugapair(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << '(' << X[_i].first << ',' << X[_i].second << ')' << " "; cout << '\n';

#define L long long
#define M ((int) 1e4)

unsigned int repsquare(unsigned int x, unsigned int p) {
    if (p == 0) {
        return 1;
    }
    if (p == 1) {
        return x;
    }
    unsigned int v = repsquare(x, p/2)%M;
    if (p & 1) {
        return (v*v%M * x) % M;
    } else {
        return (v*v)%M;
    }
}

int main()
{
    unsigned int a, b;
    char op;
    while (scanf("%u %c %u", &a, &op, &b) != EOF) {
        a %= M;
        switch (op) {
            case '+':
                b %= M;
                printf("%u\n", (a+b) % M);
                break;
            case '*':
                b %= M;
                printf("%u\n", (a*b) % M);
                break;
            case '^':
                printf("%u\n", repsquare(a, b));
                break;
        }
    }
    return 0;
}

