#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> II;
typedef vector<int> VI;
typedef vector<VI> VVI;

#define print(x)// cout << x << '\n'


void readIn(int size, VVI& graph) {
    int x, y;
    for (int i=0;i<size;i++) {
        scanf("%d %d", &x, &y);
        graph[x].push_back(y);
    }
}

void lengthOfPaths(VVI& graph, unordered_set<int>& pos, VI& visted, int cur, int end, int lenPath) {
    if (cur == end) {
        print("DONE" << lenPath);
        pos.insert(lenPath);
        return;
    }

    for (int v: graph[cur]) {
        print(cur << ' '<< v);
        lengthOfPaths(graph, pos, visted, v, end, lenPath+1);
    }
}


int main() {
    int N1, N2, M1, M2;
    bitset<2010> possible;
    scanf("%d %d %d %d", &N1, &N2, &M1, &M2);
    VVI G1(N1+1, VI());
    VVI G2(N2+1, VI());

    readIn(M1, G1);
    readIn(M2, G2);

    unordered_set<int> s1;
    unordered_set<int> s2;
    VI v1(N1+1);
    VI v2(N2+1);

    lengthOfPaths(G1, s1, v1, 1, N1, 0);
    lengthOfPaths(G2, s2, v2, 1, N2, 0);

    for (int i: s1) {
        for (int j: s2) {
            possible[i+j] = 1;
        }
    }

    int Q, q;
    scanf("%d", &Q);

    while (Q--) {
        scanf("%d", &q);
        printf("%s\n", possible[q] ? "Yes" : "No");
    }


}

