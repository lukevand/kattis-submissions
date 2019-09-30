#include <bits/stdc++.h>
using namespace std;

struct perscription {
    int dropOffTime;
    bool remote;
    int timeToFill;

    bool operator<(const perscription& other) const {
        if (dropOffTime < other.dropOffTime) {
            return true;
        } else if (dropOffTime == other.dropOffTime) {
            if (!remote && other.remote) {
                return true;
            } else if (remote == other.remote) {
                return timeToFill < other.timeToFill;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
};

int main()
{
    int n, T;
    int d, k;
    char rs;
    queue<perscription> remote;
    queue<perscription> inStore;
    vector<perscription> v;
    scanf("%d %d", &n, &T);
    for (int i=0; i<n; i++) {
        scanf("%d %c %d", &d, &rs, &k);
        perscription p;
        p.remote = (rs == 'R');
        p.dropOffTime = d;
        p.timeToFill = k;
        v.push_back(p);
    }
    sort(v.begin(), v.end());
    for (auto x : v) { cout << x.dropOffTime << " " << x.remote << " " << x.timeToFill << '\n'; };

    for (auto p : v) {
        if (p.remote) {
            remote.push(p);
        } else {
            inStore.push(p);
        }
    }

    int available = T;
    for (int i=0; i<n; i++) {
        perscription nex = remote.front();



    return 0;
}

