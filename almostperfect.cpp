#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef vector<int> VI;

int sumDiv(int N) {
    int ans = 1;
    int sqrtN = sqrt(N);
    for (int i=2; i<sqrt(N); i++) {
        if (N % i == 0) {
            ans += i;
            ans += N/i;
        }
    }
    if (sqrtN * sqrtN == N) {
        ans += sqrtN;
    }
    return ans;
}

int main()
{
    int n;
    while (scanf("%d", &n) != EOF) {
        int sd = sumDiv(n);
        /* printf("%d %d\n", sd, n); */
        if (sd == n) {
            printf("%d perfect\n", n);
        } else if (abs(sd - n) <= 2) {
            printf("%d almost perfect\n", n);
        } else {
            printf("%d not perfect\n", n);
        }
    }

    return 0;
}

