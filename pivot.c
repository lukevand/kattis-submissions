#include <stdio.h>

int main()
{
    int n, m;
    int c = 0;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &m);
        if (i == m-1) {
            c++;
        }
    }
    printf("%d\n", c);

    return 0;
}

