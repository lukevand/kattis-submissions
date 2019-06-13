#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef pair<int,int> ii;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugp(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i].first << "," << X[_i].second << " "; cout << '\n';

ii times[200000];
int rooms[200000];

bool comp(ii& x, ii& y) {
    if (x.second < y.second) {
        return true;
    } else return x.first < y.first;
}

int main()
{
    int n, k;
    int start, end;
    int count=0;
    memset(rooms, -1, sizeof rooms);
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++){
        scanf("%d %d", &start, &end);
        times[i] = ii(start,end);
    }
    sort(times, times+n, comp);
    /* debuga(times, 0, n); */
    for (int i=0, j=0;i<n;i++) {
        if (rooms[j] < times[i].first) {
            /* printf("%d %d to room %d\n", times[i].first, times[i].second, j); */
            rooms[j] = times[i].second;
            j = (j+1)%k;
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}

