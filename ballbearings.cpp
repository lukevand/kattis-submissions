#include <bits/stdc++.h>
using namespace std;

#define PI acos(-1.0)
#define EPS 1e-8

int main()
{
    int n;
    double D, d, s;
    scanf("%d", &n);
    while (n--) {
        scanf("%lf %lf %lf", &D, &d, &s);
        printf("%d\n",(int) ((2*PI) / acos((pow(D-d, 2) - 2*pow(s+d, 2))/ pow(D - d, 2))));
    }
    return 0;
}
