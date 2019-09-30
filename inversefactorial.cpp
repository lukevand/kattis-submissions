#include <bits/stdc++.h>
using namespace std;

typedef long long L;

#define print(x) cout << x << '\n'

int main()
{
    int maximum = 205025;
    string s;
    cin >> s;
    int len = s.length();
    if (len == 1) {
        if (s == "1") {
            print(1);
        } else if (s == "2") {
            print(2);
        } else if (s == "6") {
            print(3);
        }
        return 0;
    } else if (len == 3) {
        if (s == "120") {
            print(5);
        }
        if (s == "720") {
            print(6);
        }
        return 0;
    }
    vector<double> v(maximum, 0);
    vector<int> digits(maximum, 0);
    digits.push_back(1);
    for (int i=1; i< maximum; i++) {
        v[i] = v[i-1] + log10(i);
        digits[i] = 1 + (int) v[i];
    }
    cout << lower_bound(digits.begin(), digits.end(), len) - digits.begin() << '\n';

    return 0;
}

