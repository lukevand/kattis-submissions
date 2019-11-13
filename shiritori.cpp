#include <bits/stdc++.h>
using namespace std;

#define print(x) cout << x << '\n'

int main() {
    cin.sync_with_stdio(false);
    int n;
    unordered_set<string> usedWords;
    string s;
    char last;
    int player = 0;

    cin >> n;
    cin >> s;
    usedWords.insert(s);
    last = s[s.size()-1];
    n--;

    while (n--) {
        player = ((player+1)%2);
        cin >> s;
        if (!usedWords.insert(s).second || last != s[0]) {
            cout << "Player " << player+1 << " lost\n";
            return 0;
        }
        last = s[s.size()-1];
    }
    cout << "Fair Game\n";
    return 0;
}

