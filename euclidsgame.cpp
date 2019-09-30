#include <bits/stdc++.h>
using namespace std;
#define EPS 1e-10
int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b), a || b) {
        if (((double) a)/b - (1+sqrt(5))/2 > EPS) {
            printf("Stan wins\n");
        } else {
            printf("Ollie wins\n");
        }
    }
    return 0;

}

