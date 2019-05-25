#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define pp(X) for(auto const& c:X) std::cout<<c<<' '; cout<<'\n';
#define debug(XXX) cout << #XXX << ": " << XXX << '\n'

vi out(int n) {
    vi p;
    if (n%2 == 0) {
        for (int k = 0; k < n; k++) {
            if (k < n/2) {
                p.push_back(k*2);
            } else {
                p.push_back((k - (n/2 - 1))*2 - 1);
            }
        }
    } else {
        p.assign(n, -1);
        int k=0;
        int j=n/2 + 1;
        for (; k < n; k+=2, j++) {
            p[k] = k/2;
            p[k+1] = j;
        }
    }
    return p;
}

vi in(int n) {
    vi p;
    p.assign(n, -1);
    if (n % 2 == 0) {
        int j=n/2;
        for (int k = 0; k < n; k+=2) {
            p[k] = j++;
            p[k+1] = k/2;
        }
    } else {
        int j=n/2;
        for (int k = 0; k < n; k+=2) {
            p[k] = j++;
            p[k+1] = k/2;
        }
    }
    return p;
}


int main()
{
    int n;
    string s;
    int c = 0;
    int start = 1;
    int r = start;
    vi tab;
    cin >> n >> s;
    if (n == 1) {
        cout << "1" << '\n';
        return 0;
    }


    if (s == "out") {
        tab = out(n);
    } else {
        tab = in(n);
    }

    do {
        c++;
    } while ((r=tab[r]) != start);
    cout << c << '\n';
    return 0;
}

