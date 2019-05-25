#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define pp(X) for(auto const& CCC:X) std::cout<<CCC<<' '; cout<<'\n';
#define debug(XXX) cout << #XXX << ": " << XXX << '\n'

int main()
{
    int n, m;
    char c;
    scanf("%d %d", &n, &m);
    vector<vector<char>> gg;
    gg.assign(n, vector<char>);
    for (int i=0; i < n; i++) {
        for (int j=0; j<m; j++) {
            scanf("%c", &c);
            gg[i][j] = c;
        }
    }

    return 0;
}

