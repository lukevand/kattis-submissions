#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, S;
    scanf("%d %d", &M, &S);
    vector<vector<int>> v(M, vector<int>(S, -1));
    set<int> need;
    for (int i=0; i<M; i++) {
        for (int j=0; j<S; j++) {
            scanf("%d", &v[i][j]);
        }
    }
    bool insertedSomething = false;
    for (int j=0; j<S; j++) {
        insertedSomething = false;
        for (int i=0; i<M; i++) {
            if (need.insert(v[i][j]).second) {
                /* insertedSomething = true; */
                ;
            }
        }
        /* if (!insertedSomething) break; */
    }
    printf("%ld\n", need.size());
    for (auto x: need) {
        printf("%d ", x);
    }
    printf("\n");
    return 0;
}

