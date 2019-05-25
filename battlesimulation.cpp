#include <bits/stdc++.h>
using namespace std;

#define pp(X) for(auto const& c:X) std::cout<<c<<' '; cout<<'\n'
#define debug(XXX) cout << #XXX << ": " << XXX << '\n'

int main()
{
    cin.sync_with_stdio(false);
    string s;
    cin >> s;
    char putch='0';
    int i = 0;
    int len = s.length();
    while (i < len) {
        if (i <= len-3 && s[i] != s[i+1] && s[i+1] != s[i+2] && s[i+0] != s[i+2]) {
            cout << 'C';
            i+=3;
        } else {
            switch (s[i]) {
                case 'R':
                    putch = 'S';
                    break;
                case 'B':
                    putch = 'K';
                    break;
                case 'L':
                    putch = 'H';
                    break;
            }
            cout << putch;
            i+= 1;
        }
    }

    cout << '\n';
    return 0;
}

