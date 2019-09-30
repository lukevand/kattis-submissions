#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.sync_with_stdio(0);
    int n;
    cin >> n;
    string s;
    unordered_map<int, string> hashMap;
    for (int i=0; i<n; i++) {
        vector<string> depss;
        getline(cin, s);
        int colon = s.find_first_of(':');
        string name = s.substr(0, colon-1);
        if (s.back() == ':') {
            continue;
        }
        size_t next = 0;
        size_t prev = 0;
        string token;
        string deps = s.substr(colon+1, string::npos);
        while ((next = deps.find(' ')) != string::npos) {
            token = deps.substr(0, pos);
            depss.push_back(token);




    return 0;
}

