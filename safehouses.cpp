#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int mand(ii x, ii y)
{
    return abs(x.first - y.first) + abs(x.second - y.second);
}

int main(void)
{
    int n;
    char c;
    vii houses;
    vii spies;

    scanf("%d", &n);
    for (int i=0; i<n;i++) {
        for (int j=0; j<n+1; j++) { // +1 for \n
            scanf("%c", &c);
            if (c == 'H') {
                houses.push_back(ii(i, j));
            } else if (c == 'S') {
                spies.push_back(ii(i, j));
            }
        }
    }

    int best = -1;
    for (ii spy: spies) {
        int mind = INT_MAX;
        for (ii house: houses) {
            /* printf("%d %d\n", house.first, house.second); */
            mind = min(mand(spy, house), mind);
        }
        best = max(mind, best);
    }
    printf("%d\n", best);

    return 0;
}


