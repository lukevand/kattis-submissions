#include <stdio.h>

#define NN(x) ((x))*((x)+1)/2

int main(void) {
    int N, K, a;
    long long re = 0;
    scanf("%d %d", &N, &K);
    int safe[N];
    if (K == 0)
        printf("%ld\n", 0);
    else {
        for (int i=0; i<N; i++) {
            scanf("%d", &a);
            safe[i] = a;
        }

        for (int i=0; i<n; i++) {





