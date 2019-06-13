#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

ii seq[100000];

int main()
{
    /* unsigned int P, K, p, q; */
    int P;
    scanf("%d", &P);
    seq[1] = ii(1, 1);
    for (int i=0; i<1<<5; i++) {
        if (i%2 == 0) {
            seq[i] = ii(seq[i/2].first, seq[i/2].first + seq[i/2].second);
        } else {
            int p = i/2 - 1;
            seq[i] = ii(seq[p].first + seq[p].second, seq[p].second);
        }
    }
    /* while (P--) { */
    /*     scanf("%d %u/%u", &K, &p, &q); */
    /*     if (p == 1 && q == 1) { */
    /*         printf("%u 1/2\n", K); */
    /*     } else if (p == 1) { */
    /*         printf("%u %u/%u\n", K, q, q-1); */
    /*     } else if (q == 1) { */
    /*         printf("%u %u/%u\n", K, 1, q+1); */
    /*     } */
    }
    return 0;
}

