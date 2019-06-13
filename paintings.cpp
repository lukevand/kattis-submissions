#include <bits/stdc++.h>
using namespace std;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugp(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';

vector<string> colours;
vector<pair<string,string>> hideous;
/* vector<pair<string,string>> hideous_letter; */
bitset hideous

void indent(int n) {
    for (int i = 0; i < n; i++) {
        cout << "|   ";
    }
}

bool permute(vector v; int cur, int n) {
{
    indent(soFar.length());
    cout << "\"" << soFar << "\" \"" << rest << "\"" << endl;
    if (cur == n) {
        debugp(v);
        return true;
    } else {
        for (int i=0; i<(int)soFar.length()-1; i++) {
            for (int j=0; j<M; j++) {
                if ((soFar[i] == hideous[j].first && soFar[i+1] == hideous[j].second) ||
                        (soFar[i] == hideous[j].second && soFar[i+1] == hideous[j].first)) {
                    return false;
                }
            }
        }
        for (int i=0;i< (int)rest.length(); i++) {
            /* string remaining = rest.substr(0, i) + rest.substr(i+1); */
            swap(rest[
            if(!permute(v, cur+1, n)) {
                return false;
            }
        }
    }
    return true;
}


int main()
{
    cin.sync_with_stdio(false);
    map<string, int> col;
    int T, N, M;
    cin >> T;
    string s;
    string s2;
    permute("", "ABC");
    while (T--) {
        cin >> N;
        for (int i=0;i<N; i++) {
            cin >> s;
            colours.push_back(s);
        }
        cin >> M;
        while (M--) {
            cin >> s;
            cin >> s2;
            /* map[s] */
            hideous.push_back(make_pair(s, s2));
        }
    }


    return 0;
}

