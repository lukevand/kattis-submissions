#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a, b, k, num, len;
    int count = 0;
    vector<int> s;
    scanf("%d %d %d", &a, &b, &k);
    for (int i=a; i<=b; i++) {
        for (int base=2; base<=k; base++) {
            s.clear();
            num = i;
            while (num > 0) {
                s.push_back(num%base);
                num /= base;
            }
            len = s.size();
            for (int j=0; j < len/2; j++) {
                if (s[j] != s[len-j-1]) {
                    goto done;
                }
            }
        }
        count++;
done:
        ;
    }
    printf("%d\n", count);


    return 0;
}

