#include <bits/stdc++.h>

using namespace std;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugv(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';
#define debugapair(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << '(' << X[_i].first << ',' << X[_i].second << ')' << " "; cout << '\n';


typedef long long L;

int main()
{
    int y;
    int maximum = 254100;
    vector<double> v(maximum, 0);
    v.push_back(0.0);
    for (int i=1; i< maximum; i++) {
        v[i] = v[i-1] + log2(i);
    }
    /* debuga(v, 0, 10); */
    while ((scanf("%d", &y)), y) {
        int translate = y - 1940;
        translate /= 10;
        L p = pow(2, translate);
        cout << lower_bound(v.begin(), v.end(), p)-v.begin()-1 << endl;
    }
    return 0;
}

