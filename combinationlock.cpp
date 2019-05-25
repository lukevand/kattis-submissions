#include <cstdio>
using namespace std;

#define pp(X) for(auto const& c:X) std::cout<<c<<' '; cout<<'\n';

int main()
{
    int s,a,b,c;
    while (scanf("%d %d %d %d", &s, &a, &b, &c), (s||a||b||c)) {
        printf("%d\n", (120+(s-2*(a+b)-c)%40) * 9);
    }
    return 0;
}

