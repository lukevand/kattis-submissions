#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000

int recur(vector<int> nums, vector<int> seen) {
    if (nums.empty()) {
        return seen;
    } else {
        int num = nums[nums.size()-1];
        nums.pop_back();
        return num + recur(nums);
    }
}

int main()
{
    cin.sync_with_stdio(false);
    vector<int> s = {1, 9, 8, 4};
    printf("%d\n", recur(s));
    return 0;
}

