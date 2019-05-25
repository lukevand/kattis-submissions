#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debugvii(X) for(auto const& CCC:X) std::cerr<<CCC.first<< ' ' <<CCC.second << ','; cerr << '\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define rep(NNN) for (int i=0; i<NNN; i++)

inline bool insidep(int x, int y) {
    return (0 < x && x <= 8 && 0 < y && y <= 8);
}

inline vii gen_pos(int x, int y) {
    vii a;
    for (int i=-8; i<= 8; i++) {
        if (insidep(x+i, y+i)) {
            a.push_back(ii(x+i, y+i));
        }
    }
    for (int i=-8; i<= 8; i++) {
        if (insidep(x+i, y-i)) {
            a.push_back(ii(x+i, y-i));
        }
    }
    return a;
}

int main()
{
    cin.sync_with_stdio(false);
    int n;
    char x1c, x2c;
    int y1, y2;
    int x1, x2;
    cin >> n;
    while (n--) {
        cin >> x1c >> y1 >> x2c >> y2;
        x1 = x1c - 'A'+1;
        x2 = x2c - 'A'+1;
        if (((x1+y1) % 2) != ((x2+y2) % 2)) {
            cout << "Impossible\n";
        } else if (x1 == x2 && y1 == y2) {
            printf("0 %c %d\n", x1+'A'-1, y1);
        } else {
            vii a = gen_pos(x1, y1);
            vii b = gen_pos(x2, y2);
            for (ii p1: a) {
                if (p1 == ii(x2, y2)) {
                    printf("1 %c %d %c %d\n", x1+'A'-1, y1, x2+'A'-1, y2);
                    goto done;
                }
            }
            for (ii p1: a) {
                for (ii p2: b) {
                    if (p1 == p2) {
                        printf("2 %c %d %c %d %c %d\n", x1+'A'-1, y1, 'A'-1+p1.first, p1.second, x2+'A'-1, y2);
                        goto done;
                    }
                }
            }
        }
done:
        ;
    }




    return 0;
}

