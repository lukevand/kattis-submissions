#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, w;
    scanf("%d", &n);
    string s;
    while (n--) {
        vector<string> v;
        int count = 0;
        scanf("%d %d", &k, &w);
        for (int i=0; i<w; i++) {
           cin >> s;
           v.push_back(s);
        }
        for (int i=0; i<w-1; i++) {
            for (int j=0; j<k; j++) {
                string sub1 = v[i].substr(j, k);
                string sub2 = v[i+1].substr(0, k-j);
                if (sub2.find(sub1) == string::npos) {
                } else {
                    count += k-j;
                    break;
                }
            }
        }
        printf("%d\n", w*k - count);
    }

    return 0;
}

