#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define pp(X) for(auto const& CCC:X) std::cout<<CCC<<' '; cout<<'\n'
#define debug(XXX) cout << #XXX << ": " << XXX << '\n'

int main()
{
    int n, m;
    int maxso = 0;
    int c = 0;
    scanf("%d", &n);
    vector<int> A;
    vector<int> C;
    for (int i=0; i<n; i++) {
        scanf("%d", &m);
        A.push_back(m);
        maxso = max(m, maxso);
        C.push_back(maxso);
    }
    for (int i=0; i<n; i++) {
        if (i+1 == C[i] && C[i] == A[i]) {
            c++;
        }
    }
    printf("%d\n", c);

    return 0;
}

