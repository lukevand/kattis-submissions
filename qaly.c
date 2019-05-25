#include <stdio.h>

int main(void) {
    int n;
    double a, b;
    double t = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%lf %lf", &a, &b);
        t += a*b;
    }
    printf("%.3lf\n", t);
    return 0;

}

