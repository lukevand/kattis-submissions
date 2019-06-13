#include <bits/stdc++.h>
using namespace std;

int N, S, R, x;
vector<int> broken, reserve;

int recur(int p) {
    if (p == N)
        return;
    else

int main()
{
    /* bitset<10> broken, reserve; */
    scanf("%d %d %d", &N, &S, &R);
    while (S--) {
        scanf("%d", &x);
        x--;
        broken.push_back(x);
    }
    while (R--) {
        scanf("%d", &x);
        x--;
        reserve.push_back(x);
    }
    /* debug(broken); */
    /* debug(reserve); */
    recur();

    return 0;
}

