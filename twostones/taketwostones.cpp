#include <iostream>
using namespace std;

int main(void) {
    long long a;
    cin >> a;
    if (a % 2 == 0) {
        cout << "Bob" << endl;
    } else {
        cout << "Alice" << endl;
    }
    return 0;
}
