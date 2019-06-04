#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'

int digits[20];

int main()
{
    unordered_set<ll> s;
    int plus=0;
    for ( ; scanf("%d+", &digits[plus]) != EOF; plus++);
    int limit = 1<<plus;
    for (int i=0; i < limit; i++) {
        ll ssum = 0;
        ll current = digits[0];
        for (int j=1; j<plus; j++) {
            if (i & (1 << j)) {
                // add what we have to ssum, then set our current to the next thing
                ssum += current;
                current = digits[j];
            } else {
                current = stoll(to_string(current) + to_string(digits[j]));
            }
        }
        ssum += current;
        s.insert(ssum);
    }
    printf("%d\n", (int) s.size());
    return 0;
}

