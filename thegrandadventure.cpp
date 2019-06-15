#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <map>

using namespace std;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugp(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';

int main()
{
    cin.sync_with_stdio(false);
    int n;
    /* int c; */
    map<char,char> m;
    char str[102];
    m['t'] = '|';
    m['j'] = '*';
    m['b'] = '$';
    scanf("%d", &n);
    bool good;
    while (scanf("%s", str) != EOF) {
        stack<int> s;
        /* debug(str); */
        good = true;
        for (char *c=str; *c!='\0' && good; c++) {
            if (*c == '$' || *c == '|' || *c == '*') s.push(*c);
            else if (*c == 'b' || *c == 'j' || *c == 't') {
                if (s.empty()) {
                    good = false;
                    break;
                } else if (s.top() != m[*c]) {
                    good = false;
                }
                s.pop();
            }
        }
        if (!s.empty()) good = false;
        printf("%s\n", (good) ? "YES" : "NO");
    }

    return 0;
}

