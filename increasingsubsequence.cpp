#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define debugp(X) for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debugvii(X) for(auto const& CCC:X) std::cerr<<CCC.first<<', '<<CC.second << '\n'
#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';

int seq[200];
int S[200];
int P[200];
stack<int> stac;

int main()
{
    int n;
    while (scanf("%d", &n), n) {
        memset(seq, 0, sizeof seq);
        memset(P, 0, sizeof P);
        memset(S, 0, sizeof S);
        for (int i=0; i<n; i++) {
            scanf("%d", &seq[i]);
            P[i] = i;
        }

        S[0] = 1;

        for (int i=1; i<n; i++) {
            int best=1;
            int prev = i;
            int localmin = INT_MAX;
            vector<int> localmins;
            for (int j=0; j<i; j++) {
                if (seq[j] < seq[i]) {
                    best = S[j]+1;
                    prev = j;
                    localmin = seq[j];
                }
                /* S[i] = max(best, S[i-1]); */
                S[i] = best;
                P[i] = prev;
            }
        }
        debuga(S, 0, n);
        debuga(P, 0, n);
    }

        /* for (int i=1; i<n; i++) { */
        /*     m = 1; // default if nothing found */
        /*     localmin = INT_MAX; */
        /*     bestprev = i; */
        /*     for (int j=0; j<i; j++) { */
        /*         if (seq[j] < seq[i] && S[j]+1 >= m) { */
        /*             if (seq[j] < localmin || S[j] >= m) { */
        /*                 localmin = seq[j]; */
        /*                 bestprev = j; */
        /*             } */
        /*             m = S[j]+1; */
        /*         } */
        /*     } */
        /*     S[i] = m; */
        /*     P[i] = bestprev; */
        /* } */
        /* /1* for (int i=0; i < n; i++) { *1/ */
        /* /1*     cout << S[i] << ' '; *1/ */
        /* /1* } *1/ */
        /* /1* cout << '\n'; *1/ */
        /* /1* for (int i=0; i < n; i++) { *1/ */
        /* /1*     cout << P[i] << ' '; *1/ */
        /* /1* } *1/ */
        /* /1* cout << '\n'; *1/ */

        /* printf("%d ", S[n-1]); */
        /* k=n-1; */
        /* while (k != P[k]) { */
        /*     stac.push(seq[k]); */
        /*     k = P[k]; */
        /* } */
        /* stac.push(seq[k]); */
        /* while (!stac.empty()) { */
        /*     top = stac.top(); */
        /*     stac.pop(); */
        /*     printf("%d%c", top, (stac.empty()) ? '\n' : ' '); */
        /* } */
    /* } */
    return 0;
}

