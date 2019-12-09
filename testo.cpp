#include <bits/stdc++.h>
using namespace std;

#define mt make_tuple
#define eb emplace_back
#define pb push_back
typedef pair<int,int> II;
typedef tuple<int,int,int> III;
typedef vector<II> VII;
typedef vector<III> VIII;

int main() {
    int a,b,c;
    tie(a,b,c) = III(1,2,3);
    tie(a,b) = make_pair(b,a);
    VII v;
    v.eb(a,b);

    priority_queue<III> q;
    q.emplace(0, 50, -1);
    while(!q.empty()) {
        int dist, node, prev;
        tie(dist, ode, prev) = q.top(); q.pop();


    return 0;
}

