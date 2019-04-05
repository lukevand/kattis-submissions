#include <bits/stdc++.h>
using namespace std;

void parse_line(string s) {
    bool seen_0 = false;
    bool in_hex = false;
    long int number = 0;
    int digits = 0;

    for (unsigned int i = 0; i < s.length(); i++) {
        if (seen_0 && (s[i] == 'x' || s[i] == 'X')) {
            in_hex = true;
        } else if (s[i] == '0') {
             seen_0 = true;
        } else if (in_hex) {
            while (('a' < s[i] && s[i] < 'f') || ('A' < s[i] && s[i] < 'F')) {
                digits += 1;






int main()
{
    cin.sync_with_stdio(false);
    string s;
    while (getline(cin, s)) {
        parse_line(s);
    }
    return 0;
}

