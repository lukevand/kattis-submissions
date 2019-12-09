#include <bits/stdc++.h>
using namespace std;

#define print(x) cout << x << '\n'

int main() {
    int l, d, n;
    int x;
    int total = 0;
    vector<int> birds;
    scanf("%d %d %d", &l, &d, &n);
    if (n == 0) {
        printf("%d\n", (l-12)/d + (1 ? (d<l) : 0));
        return 0;
    }

    for (int i=0; i<n; i++) {
        scanf("%d", &x);
        birds.push_back(x);
    }

    sort(birds.begin(), birds.end());

    int firstbird = birds[0];
    total += (firstbird-6)/d;
    int lastbird = birds[n-1];
    total += (l-6-lastbird)/d;
    for (int i=0; i<n-1; i++) {
        int diff = birds[i+1] - birds[i];
        total += (diff-d)/d;
    }
    printf("%d\n", total);
    return 0;
}

