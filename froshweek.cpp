#include <bits/stdc++.h>

using namespace std;

typedef long long L;

L c = 0;

void merge(vector<int> &A) {
    unsigned lenA = A.size();
    unsigned middle = lenA/2;
    unsigned int i = middle;
    unsigned int j = 0U;
    while (i < lenA && j < middle) {
        if (A[i] > A[j]) {
            c += lenA - j;
            i++;
        } else {
            j++;
        }
    }
    sort(A.begin(), A.end());
}

L mergeCount(vector<int> &C)
{
    int a = mergeCount(C


int main()
{
    cin.sync_with_stdio(false);
    int n,a;
    scanf("%d", &n);
    vector<int> v;
    for (int i=0; i<n; i++) {
        scanf("%d", &a);
        v.push_back(a);
    }

    return 0;
}

