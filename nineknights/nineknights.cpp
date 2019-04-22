#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    vector<int, int> knights;
    string line;
    for (int i = 0; i < 5; i++) {
        cin >> line;
        for (int j = 0; j < 5; j++) {
            if (line[j] == 'k') {
                knights.push_back(i, j);
                /* board[i][j] = 1; */
            }
        }
    }

    for (int i = 0; i < knights.size(); i++) {
        cout << knights[i] << endl;
    }
    /* for (int i = 0; i < 5; i++) { */
    /*     for (int j = 0; j < 5; j++) { */
    /*         cout << board[i][j]; */
    /*     } */
    /*     cout << endl; */
    /* } */
    /* cout << "vaild" << endl; */

    return 0;
}

