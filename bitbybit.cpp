#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    while (cin >> n, n) {
        bitset<32> qmark;
        bitset<32> b;
        string s;
        int i, j;

        qmark.set();

        while (n--) {
            cin >> s >> i;
            switch (s[0]) {
                case 'C':
                    qmark[i] = 0;
                    b[i] = 0;
                    break;
                case 'S':
                    qmark[i] = 0;
                    b[i] = 1;
                    break;
                case 'O':
                    cin >> j;
                    if (qmark[i] && qmark[j]) {
                        qmark[i] = 1;
                    } else if (!qmark[i] && !qmark[j]) {
                        b[i] = b[i]|b[j];
                    } else if ((!qmark[i] && b[i]) || (!qmark[j] && b[j])) {
                        b[i] = 1;
                        qmark[i] = 0;
                    } else {
                        qmark[i] = 1;
                    }
                    break;
                case 'A':
                    cin >> j;
                    if (qmark[i] && qmark[j]) {
                        qmark[i] = 1;
                    } else if (!qmark[i] && !qmark[j]) {
                        b[i] = b[i]&b[j];
                    } else if ((!qmark[i] && b[i]==0) || (!qmark[j] && b[j]==0)) {
                        b[i] = 0;
                        qmark[i] = 0;
                    } else {
                        qmark[i] = 1;
                    }
                    break;
            }
        }

        for (int k=31; k>-1; k--) {
            if (!qmark[k]) {
                cout << b[k];
            } else {
                cout << '?';
            }
        }
        cout << '\n';
    }
    return 0;
}

