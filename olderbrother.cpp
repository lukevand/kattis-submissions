#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    scanf("%d", &q);
    if (q == 1) {
        printf("no\n");
        return 0;
    } else if (q == 2) {
        printf("yes\n");
        return 0;
    }
    vector<int> primes;
    bitset<32000> bs;
    bs.set();
    bs[0] = bs[1] = 0;
    int ssize = sqrt(q);
    for (int i=2; i<ssize; i++) {
        if (bs[i]) {
            for (int j=i*i; j<=ssize; j+=i) {
                bs[j] = 0;
            }
            primes.push_back(i);
        }
    }
    return 0;
}

