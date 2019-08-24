#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugv(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';
#define debugapair(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << '(' << X[_i].first << ',' << X[_i].second << ')' << " "; cout << '\n';

int main()
{
    cin.sync_with_stdio(false);
    int n,a;
    scanf("%d", &n);
    vector<int> v;
    for (int i=0; i<n; i++) {
        scanf("%d", &a);
        v.push_back(a);
    }
    return 0;
}

