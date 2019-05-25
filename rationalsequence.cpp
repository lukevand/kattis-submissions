#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int main()
{
    unsigned int P, K, p, q;
    scanf("%u", &P);
    while (P--) {
        scanf("%d %u/%u", &K, &p, &q);
        if (p == 1 && q == 1) {
            printf("%u 1/2\n", K);
        } else if (p == 1) {
            printf("%u %u/%u\n", K, q, q-1);
        } else if (q == 1) {
            printf("%u %u/%u\n", K, 1, q+1);
        }
    }
    return 0;
}

