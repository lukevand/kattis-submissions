#include <bits/stdc++.h>
using namespace std;

vector<string> colours;
unordered_map<string,set<string>> hideous;
vector<string> result;
vector<string> soFar;
vector<bool> used;
bool done;
int number;

void dfs(int cur, int n) {
    if (cur == n) {
        number++;
        if (!done) {
            for (string s: soFar) {
                result.push_back(s);
            }
            done = true;
        }
    }
    for (int i=0; i<n; i++) {
        if (used[i]) {
            continue;
        }
        if (soFar.empty() or hideous[soFar.back()].find(colours[i]) == hideous[soFar.back()].end()) {

            soFar.push_back(colours[i]);
            used[i] = true;

            dfs(cur+1, n);

            soFar.pop_back();
            used[i] = false;
        }
    }
}


int main()
{
    cin.sync_with_stdio(false);
    map<string, int> col;
    int T, N, M;
    cin >> T;
    string s;
    string s2;
    while (T--) {
        done = false;
        used.clear();
        result.clear();
        soFar.clear();
        hideous.clear();
        colours.clear();
        number = 0;
        cin >> N;
        used.assign(N, 0);
        for (int i=0;i<N; i++) {
            cin >> s;
            colours.push_back(s);
        }
        cin >> M;
        while (M--) {
            cin >> s >> s2;
            hideous[s].insert(s2);
            hideous[s2].insert(s);
        }
        dfs(0, N);
        cout << number << '\n';
        for (string ss: result) {
            cout << ss << ' ';
        }
        cout << '\n';
    }

    return 0;
}

