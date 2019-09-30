#include <bits/stdc++.h>
using namespace std;

#define print(x) cout << x << '\n'

int main(void) {
    cin.sync_with_stdio(false);
    int n;
    string s;
    unordered_set<string> strings;
    int count[300];
    cin >> n;
    while (n) {

        unordered_map<string, int> stringsCount;
        memset(count, 0, sizeof count);
        strings.clear();
        getline(cin, s);
        while (n--) {
            getline(cin, s);
            int re = 0;
            for (char c: s) {
                re ^= c;
            }
            count[re] += 1;
            if (strings.find(s) != strings.end()) {
                stringsCount[s] += 1;
            }
            strings.insert(s);
        }
        int totalCount = strings.size();
        int collisionCount = 0;
        for (int i=0; i<300; i++) {
            int item = count[i];
            if (item > 1) {
                collisionCount += item*(item-1)/2;
            }
        }
        for (auto p: stringsCount) {
            int item = p.second;
            if (item > 0) {
                collisionCount -= item*(item+1)/2;
            }
        }
        cout << totalCount << " " << collisionCount << '\n';
        cin >> n;
    }
    return 0;
}
