#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long a;
    cin >> a;
    if (a % 2 == 0) {
        cout << "Bob" << '\n';
    } else {
        cout << "Alice" << '\n';
    }
    return 0;
}
