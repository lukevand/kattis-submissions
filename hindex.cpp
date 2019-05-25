#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, c;
    std::vector<int> hs;
    scanf("%d", &n);
    int a=n;
    while (a--) {
        scanf("%d", &c);
        hs.push_back(c);
    }
    std::sort(hs.rbegin(), hs.rend());
    int i=0;
    for (; i<n && hs[i] >=i+1 ; i++) {
        ;
    }
    printf("%d\n", i);
    return 0;
}

