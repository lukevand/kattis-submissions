#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

int main()
{
    int  n, m;
    int a, s;
    int count = 0;
    scanf("%d %d", &n, &m);
    priority_queue<ii, vector<ii>, greater<ii>> pq;
    vector<ii> v;
    for (int i=0; i<n; i++) {
        scanf("%d %d", &a, &s);
        v.push_back(ii(s+a, s));
    }
    sort(v.begin(), v.end());
    for (int i=0; i<n; i++) {
        if (pq.empty()) {
            count++;
            pq.push(v[i]);
        } else {
            ii top = pq.top();
            /* int qstart = top.second; */
            int qend = top.first;
            int cstart = v[i].second;
            /* int cend = v[i].first; */
            if (cstart <= qend) {
                count++;
                pq.push(v[i]);
            } else if (cstart <= qend + m) {
                pq.push(v[i]);
            } else {
                count++;
                pq.push(v[i]);
            }
        }
    }
    printf("%d\n", count);
    return 0;
}

