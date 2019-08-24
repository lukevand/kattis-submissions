#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugv(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';

int A[2500];
int B[2500];
vector<int> used;
set<int> usedset;
int n;
int x, y;
int nex;

bool solve(int index)
{
    if (index == n) {
        return true;
    }

    nex = A[index] + B[index];
    if (usedset.find(nex) != usedset.end()) {
        used.push_back(nex);
        usedset.insert(nex);
    }


int main()
{
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d %d", A[i], B[i]);
    }
    return 0;
}

