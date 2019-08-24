#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int P, K, p, q;
    scanf("%u", &P);
    while (P--) {
        scanf("%u %u/%u", &K, &p, &q);
        if (q == 1) {
            printf("%u %u/%u\n", K, 1U, p+1);
        } else if (p < q) {
            printf("%u %u/%u\n", K, q, q-p);
        } else {
            int level = p/q;
            int r = p%q;
            printf("%u %u/%u\n", K, q, (level+1)*q - r);
        }


    }
    return 0;
}

