#include <bits/stdc++.h>
using namespace std;

int p, a, b, c, d, n;
inline double price(int k) {
    return p * (sin(a*k + b) + cos(c*k + d) + 2);
}

int main()
{
    scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n);
    double *prices = new double[n];
    for (int i = 0; i < n; i++) {
        prices[i] = price(i+1);
    }
    double *maxi = new double[n];
    double *mini = new double[n];
    maxi[0] = prices[0];
    mini[n-1] = prices[n-1];

    for (int i=1; i<n; i++) {
        maxi[i] = max(maxi[i-1], prices[i]);
        mini[n-1-i] = min(mini[n-i], prices[n-1-i]);
    }
    double ma=-1;
    for (int i=0; i<n; i++) {
        ma = max(ma, maxi[i] - mini[i]);
    }
    printf("%.8f\n", ma);

    return 0;
}

