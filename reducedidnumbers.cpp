#include <bits/stdc++.h>
using namespace std;

int v[301];
int n;
unordered_set<int> hashMap;

int main() {
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &v[i]);
    }
    for (int m=1; m<1000000; m++) {
        hashMap.clear();
        bool invalid = false;
        for (int j=0;j<n;j++) {
            if (!hashMap.insert(v[j]%m).second) {
                invalid = true;
                break;
            }
        }
        if (invalid) continue;
        printf("%d\n", m);
        return 0;
    }

    return 0;
}

