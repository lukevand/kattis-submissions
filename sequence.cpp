#include <bits/stdc++.h>
using namespace std;

#define print(x)// cout << x << '\n'

int main() {
    int N;
    scanf("%d", &N);
    if (N == 2 || N == 3) {
        printf("2\n1 2\n");
        return 0;
    }
    vector<int> v;
    int i=2;
    print(N);
    N = 1 << ((int) log2(N));
    print(N);
    int m = N;
    v.push_back(N);
    while (i <= sqrt(m)) {
        if ((N % i) == 0) {
            N /= i;
            v.push_back(N);
        } else {
            i++;
        }
    }
    printf("%lu\n", v.size());
    /* printf("1 "); */
    for (auto r=v.rbegin(); r!= v.rend(); r++) { printf("%d ", *r); }
    printf("\n");

    return 0;
}

