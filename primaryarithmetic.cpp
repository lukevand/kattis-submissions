#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    int a, b;
    while (scanf("%d %d", &a, &b), (a || b)) {
        int count = 0;
        bool carry = false;
        // make a > b
        if (a < b) {
            int tmp = a;
            a = b;
            b = tmp;
        }
        /* printf("%d %d\n", a, b); */
        while (a > 0) {
            int aones = a%10;
            int bones = b%10;
            if (carry) {
                aones++;
                carry = false;
            }
            if (aones + bones >= 10) {
                count++;
                carry = true;
            }
            a /= 10;
            b /= 10;
        }
        if (count == 1) {
            printf("%d carry operation.\n", count);
        } else if (count > 1) {
            printf("%d carry operations.\n", count);
        } else
            printf("No carry operation.\n");
    }
    return 0;
}

