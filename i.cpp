#include <bits/stdc++.h>
using namespace std;

#define INF ((int) 1e9)

typedef pair<int,int> II;
typedef vector<int> VI;
typedef vector<II> VII;
typedef vector<VI> VVI;


int main()
{
    int N, R, temp, x, y, d, Q, A, B, K, T;
    VII temps;
    cin.sync_with_stdio(false);
    cin >> N >> R;
    VVI dist(N, VI(N, INF));

    for (int i = 0; i < N; ++i) {
        cin >> temp;
        temps.push_back(II(temp, i));
    }

    sort(temps.begin(), temps.end());

    for (int i = 0; i < R; ++i) {
        cin >> x >> y >> d;
        --x;
        --y;
        dist[x][y] = d;
    }

    for (int k = 0; k < N; ++k) {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    cin >> Q;
    VVI customerInfo(Q, VI());
    for (int i = 0; i < Q; ++i) {
        cin >> A >> B >> K >> T;
        customerInfo[i] = {A, B, K, T};
    }

    return 0;
}

