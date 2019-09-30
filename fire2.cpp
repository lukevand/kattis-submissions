#include <bits/stdc++.h>
using namespace std;

char house[1001][1001];
int d1[4] = {1, 0, -1, 0};
int d2[4] = {0, 1, 0, -1};

#define print(x) cout << x << '\n'

typedef pair<int,int> II;
typedef vector<II> VII;

struct Player {
    II pos;
    char c;
    Player(II _p, bool i) : pos(_p), c(i) {};
};

int main() {
    int N, n, m;
    II start;
    VII fires;
    char c;

    scanf("%d", &N);
    while (N--) {
        scanf("%d %d", &n, &m);
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                scanf("%c", &c);
                if (c == '@') {
                    start = II(i, j);
                    house[i][j] = '@';
                } else if (c == '*') {
                    fires.push_back(II(i, j));
                    house[i][j] = '*';
                } else {
                    house[i][j] = '.';
                }
            }
            scanf("%c", &c);
        }
        queue<Player> q;
        q.push(Player(start, '@'));
        for (II v : fires) {
            q.push(Player(v, '*'));
        }

        while (!q.empty()) {
            Player u = q.front(); q.pop();
            II pos = u.pos;
            for (int i=0; i<4; i++) {
                if (house[pos.first+d1[i]][pos.second+d2[i]] == '.') {




    return 0;
}

