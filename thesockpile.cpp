#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    scanf("%d %d\n", &m, &n);
    vector<int> v;
    v.assign(n, 0);
    for (int i=1; i<=m; i++) {
        v.push_back(i);
        v.push_back(i);
    }
    for (int x: v) { printf("%d ", x); }; printf("\n");
    int count = 0;
    int cap = 1e7;
    for (int z=0; z<cap; z++) {
        unsigned seed = chrono::system_clock::now().time_since_epoch().count();
        shuffle(v.begin(), v.end(), default_random_engine(seed));
        for (int i=0; i<(int)v.size()-1; i+=2) {
            if (v[i] == v[i+1]) {
                count++;
                break;
            }
        }
    }
    printf("%d\n", count);
    printf("%.10g\n", 1-(double)count/cap);
    return 0;
}

