#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define pp(X) for(auto const& CCC:X) std::cout<<CCC<<' '; cout<<'\n';
#define debug(XXX) cout << #XXX << ": " << XXX << '\n'

int main()
{
    cin.sync_with_stdio(false);
    cout << "okd";
    ll x, y, a, b, c, d;
    cin >> x >> y;
    cin >> a >> b >> c >> d;
    ll g = gcd(x, y);
    cout << "okd";
    debug(g);
    if (g == 1) {
        cout << "yes\n";
    } else {
        ll xg, yg;
        xg = x/g;
        yg = y/g;
        if ((a <= xx && xx <= c) && (b <= yy && yy <= d)) {
                    cout << "No\n" << xx << " " << yy << '\n';
                cout << "No\n";
        } else {
            o
        debug(xg);
        debug(yg);
        for (ll xx = xg; xx < x; xx+=xx) {
            for (ll yy = yg; yy < y; yy+=yy) {
                if ((a <= xx && xx <= c) && (b <= yy && yy <= d)) {
                    ;
                } else {
                    cout << "No\n" << xx << " " << yy << '\n';
                }
            }
        }
    }
    return 0;
}

