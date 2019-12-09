#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> memo(101, vector<int>(10001, 0));
vector<int> v;

void knap(int i, int n, int cap) {
    if (i == n-1) return 0;
    if (memo[i][cap] != -1) return memo[i][cap];
    if (v[i] >

int main() {
    int testCase, n, value;
    scanf("%d %d", &testCase, &value);
    while (testCase--) {
        scanf("%d", &n);
        v.assign(n, -1);
        for (int i=0;i<n;i++) {
            scanf("%d", &v[i]);
        }



    return 0;
}

