#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000

int main()
{
    int X = 101;
    int sum;
    int[] l = {1, 2, 3, 10, 100, 37, 23};
    for (int i = 0; i < (1<<n); i++) {
        sum = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1<<j)) {
                sum += l[j];
            }
            if (sum == X) break;
        }
    }
    return 0;
}

