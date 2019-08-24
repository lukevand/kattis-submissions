#include <bits/stdc++.h>

using namespace std;

#define debug(XXX) cerr << #XXX << ": " << XXX << '\n'
#define debugv(X) cerr << #X << ": "; for(auto const& CCC:X) std::cerr<<CCC<<' '; cerr<<'\n'
#define debuga(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << X[_i] << " "; cout << '\n';
#define debugapair(X, _a, _b) cerr << #X << ": "; for (int _i=_a; _i<_b; _i++) cout << '(' << X[_i].first << ',' << X[_i].second << ')' << " "; cout << '\n';
#define print(_x) cout << _x << '\n'

struct point_i {
    int x, y;
    point_i(int _x, int _y) : x(_x), y(_y) {};
};

struct point {
    double x, y;
    point(double _x, double _y) : x(_x), y(_y) {};
};

struct state {
    point p;
    int t;
    state(point _p, int _t) : p(_p), t(_t) {};
};

int distsquared(point_i p1, point_i q1)
{
    int xs = p1.x - q1.x;
    int ys = p1.y - q1.y;
    return xs*xs + ys*ys;
}

double dist(point p1, point p2)
{
    return hypot(p1.x - p2.x, p1.y - p2.y);
}

point interpolate(point v1, point v2, double s)
{
    double xs = v2.x*s + (1.0 - s) * v1.x;
    double ys = v2.y*s + (1.0 - s) * v1.y;
    return point(xs, ys);
}


int main()
{
    int n, t;
    int xi, yi, ti;
    scanf("%d %d", &n, &t);
    vector<state> v;
    double total_real = 0;
    for (int i=0; i<n; i++) {
        scanf("%d %d %d", &xi, &yi, &ti);
        v.push_back(state(point(xi, yi), ti));
    }

    for (int i=0; i<n-1; i++) {
        total_real += dist(v[i].p, v[i+1].p);
        debug(total_real);
    }

    vector<point> incorrect;

    if (t <= v[1].t) {
        incorrect.push_back(interpolate(v[0].p, v[1].p, (double) t/v[1].t));
    }

    for (auto i: incorrect) {
        cout << i.x << " " << i.y << '\n';
    }
    cout << total_real << '\n';


    return 0;
}

