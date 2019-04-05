#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000

int main()
{
    cin.sync_with_stdio(false);
    int X, N, p;
    int sump = 0;
    scanf("%d", &X);
    scanf("%d", &N);
    int N1 = N+1;
    while (N--) {
        scanf("%d", &p);
        sump += p;
    }
    printf("%d\n", N1*X - sump);
    return 0;
}

