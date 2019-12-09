#include <bits/stdc++.h>
using namespace std;

#define print(x) //cout << #x << ": " << x << '\n'

typedef long long L;

L facts[16];

L factorial(int n) {
    if (facts[n] > 0) {
        return facts[n];
    }

    L f = n * factorial(n-1);
    facts[n] = f;
    return f;
}

int binomial(int n, int k) {
    return factorial(n)/(factorial(k)*factorial(n-k));
}

int main() {
    facts[0] = 1;
    facts[1] = 1;
    facts[2] = 2;
    int n;
    int ratings[16];
    int partSum[17];
    L k;
    L total;
    while (scanf("%d", &n), n) {
        memset(ratings, 0, sizeof ratings);
        memset(partSum, 0, sizeof partSum);
        k = 0;
        total = 0L;
        for (int i=0; i<n; i++) {
            scanf("%d", &ratings[i]);
            k += ratings[i];
        }
        partSum[0] = 0;
        for (int i=1; i<n; i++) {
            partSum[i] = partSum[i-1] + ratings[i-1];
            print(partSum[i]);
        }

        for (int j=0; j<k; j++) {
            total += binomial(j + n - 1, j);
        }

        for (int i=0; i<n-1; i++) {
            for (int j=0; j<ratings[i]; j++) {
                total += binomial(k - j - partSum[i] + n - i - 2, n-i-2);
            }
        }
        total += 1;
        printf("%lld\n", total);
    }


    return 0;
}

