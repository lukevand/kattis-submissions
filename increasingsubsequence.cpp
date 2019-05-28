#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debugvii(X) for(auto const& CCC:X) std::cerr<<CCC.first<<', '<<CC.second << '\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'

int A[200];
int tab[200];
int re[200];

int main()
{
    int n, a;
    vi f;
    while (scanf("%d", &n), n) {
        cout << "SSS\n";
        memset(A, 0, sizeof A);
        memset(re, 0, sizeof re);
        memset(tab, 0, sizeof tab);
        for (int i=0; i<n; i++) {
            scanf("%d", &a);
            A[i] = a;
            re[i] = i;
        }

        tab[0] = 1;

        for (int i=1; i<n; i++) {
            int m = 1;
            int localmin = -1;
            for (int j=0; j<i; j++) {
                if (A[j] < A[i] && tab[j]+1 >= m) {
                    m = tab[j]+1;
                    if (A[j] > localmin) {
                        localmin = A[j];
                        re[i] = j;
                    }
                }
        }
        tab[i] = m;
        /* re[i] = */
    }
    for (int i=0; i < n; i++) {
        cout << tab[i] << ' ';
    }
    cout << '\n';
    for (int i=0; i < n; i++) {
        cout << re[i] << ' ';
    }
    cout << '\n';

    /* int last=1; */
    /* int lasti = 0; */
    /* for (int i=0;i<n;i++) { */
    /*     if (tab[i]==last) { */
    /*         lasti = i; */
    /*     } else if (tab[i] == last+1) { */
    /*         last = tab[i]; */
    /*         printf("%d ", A[lasti]); */
    /*         lasti=i; */
    /*     } */
    /* } */
    /* cout<<'\n'; */
}
return 0;
}

