#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int tmp;
    for (int i=0; i<n; i++) {
        int run = 0;
        for (int j=0; j<n; j++) {
            cin >> tmp;
            run |= tmp;
        }
        cout << run << " ";
    }
    return 0;
}

