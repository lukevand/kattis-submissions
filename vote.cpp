#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    int T, n, tmp, sum, maxso, maxi, count;
    cin >> T;
    while(T--) {
        cin >> n;
        sum = 0;
        maxso = -1;
        maxi = 1;
        count = 0;
        for (int i = 1; i <= n; i++) {
            cin >> tmp;
            sum += tmp;
            if (tmp > maxso) {
                count = 0;
                maxso = tmp;
                maxi = i;
            } else if (tmp == maxso) {
                count++;
            }
        }
        if (maxso > sum/2) {
            cout << "majority winner " << maxi << '\n';
        } else if (count==0) {
            cout << "minority winner " << maxi << '\n';
        } else {
            cout << "no winner" << '\n';
        }
    }

    return 0;
}

