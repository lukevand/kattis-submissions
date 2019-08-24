#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

bool comp(ii& x, ii& y) {
    if (x.second < y.second) {
        return true;
    } else if (x.second == y.second) {
       return x.first < y.first;
    } else {
        return false;
    }

}

int main()
{
    int n, k;
    int start, end;
    int count=0;
    multiset<int> endtimes;
    vector<ii> times;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++){
        scanf("%d %d", &start, &end);
        times.push_back(ii(start,end));
    }
    for (int i=0; i<k;i++) {
        endtimes.insert(0);
    }
    sort(times.begin(), times.end(), comp);
    for (int i=0; i<n;i++) {
        auto it = endtimes.upper_bound(-times[i].first);

        if (it != endtimes.end()) {
            endtimes.erase(it);
            endtimes.insert(-times[i].second);
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}

