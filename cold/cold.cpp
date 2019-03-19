#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    int num;
    int count = 0;
    cin >> num;
    for(int i = 0; i < num; i++) {
        int a;
        cin >> a;
        if (a < 0) {
            count++;
        }
    }
    cout << count << '\n';
    return 0;
}
