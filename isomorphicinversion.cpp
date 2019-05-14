#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int main()
{
    cin.sync_with_stdio(false);
    string s;
    cin >> s;
    int count = 0;
    int len = s.length();
    int i, j;
    i = 0;
    j = len-1;
    while (i < len/2 && j >= len/2) {
        if (s[i] == s[j]) {
            i++;
            j++;
            count += 2;
        }



    for (unsigned int i=0; i < len/2; i++) {
        if (s[i] == s[
        cout << s[i];
    }
    cout << "\n";
    return 0;
}

