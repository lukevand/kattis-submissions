#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debugvii(X) for(auto const& CCC:X) std::cerr<<CCC.first<<', '<<CC.second << '\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'

ii board[8];

int main()
{
    char c;
    /* vector<ii> board; */
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            scanf("%c", &c);
            if (c == '*') {
                board[i] = ii(i, j);
            }
        }
        scanf("%c", &c); // discard newline
    }

    for (int i=0; i<7; i++) {
        for (int j=i+1; j<8; j++) {
            if ((board[i].first == board[j].first) || (board[i].second == board[j].second) || abs(board[i].first - board[j].first) == abs(board[i].second - board[j].second)) {
                printf("invalid\n");
                return 0;
            }
        }
    }
    printf("valid\n");

    return 0;
}

