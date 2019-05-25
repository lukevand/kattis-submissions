#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    cin.sync_with_stdio(false);
    ll n;
    cin >> n;
    set<ll> s;
    for (int i=1; i <= sqrt(n); i+=1) {
        if ((n%i) == 0) {
            s.insert(i-1);
            s.insert(n/i - 1);
        }
    }

    for (set<ll>::iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << ' ';
    }
    cout << '\n';
    return 0;
}

