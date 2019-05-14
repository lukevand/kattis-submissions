#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000

char T[101], P[101];
int b[101], n, m;

void kmppp() {
    int i = 0, j = -1; b[0] = -1;
    while (i < m) {
        while (j >= 0 && P[i] != P[j]) j=b[j];
        i++;j++;
        b[i] = j;
    }
}
void kmp() {
    int i = 0, j = 0;
    while (i<n) {
        while (j>=0&& T[i] != P[j]) j=b[j];
        i++;j++;
        if (j == m) {
            printf("match at %d\n", i-j);
            j=b[j];
        }
    }
}


int main()
{
    return 0;
}

