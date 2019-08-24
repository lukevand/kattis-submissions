#include <bits/stdc++.h>

using namespace std;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugv(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';
#define debugapair(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << '(' << X[_i].first << ',' << X[_i].second << ')' << " "; cout << '\n';

int main()
{
    cin.sync_with_stdio(false);
    priority_queue<int, vector<int>, less<int>> pq;
    unordered_set<int> seen;
    int n, a;
    int maximum = -1;
    scanf("%d", &n);
    vector<int> v(n, -1);
    vector<int> u(n, -1);
    for (int i=0; i<n; i++) {
        scanf("%d", &a);
        pq.push(i);
        /* seen.insert(a); */
        v[i] = a;
        maximum = max(maximum, a);
    }
    if (maximum <= n) {
        printf("Error\n");
        return 0;
    }
    pq.push(n);
    /* for (int i=1; i<n+1; i++) { */
    /*     if (seen.find(i) == seen.end()) { */
    /*     } */
    /* } */
    reverse(v.begin(), v.end());
    vector<int> result;
    /* debugv(v); */

    for (int i=0; i<n-1; i++) {
        int top = pq.top();
        /* debug(top); */
        if (v[i] == v[i+1]) {
            pq.pop();
            seen.insert(top);
            result.push_back(top);
        } else {
            if (seen.find(v[i+1]) == seen.end()) {
                result.push_back(v[i+1]);
                seen.insert(v[i+1]);
            } else {
                pq.pop();
                seen.insert(top);
                result.push_back(top);
            }
        }

    }
    result.push_back(pq.top());
    reverse(result.begin(), result.end());
    for (int i: result) {
        printf("%d\n", i);
    }
    /* debugv(result); */


    return 0;
}

