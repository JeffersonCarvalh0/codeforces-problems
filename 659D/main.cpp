# include <iostream>
# include <vector>

using namespace std;

struct Point {
    int x, y;
    Point(int x = 0, int y = 0): x(x), y(y) {}
};

inline int orientation(Point &p1, Point &p2, Point &p3) {
    return ((p2.y - p1.y) * (p3.x - p1.x)) - ((p2.x - p1.x) * (p3.y - p1.y));
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, x, y, count = 0;

    cin >> n;
    vector<Point> points(n + 1);
    for (int i = 0; i <= n; ++i) { cin >> x >> y; points[i] = Point(x, y); }

    for (int i = 0, j = 1, k = 2; k <= n; ++i, ++j, ++k)
        if (orientation(points[i], points[j], points[k]) < 0) ++count;

    cout << count << '\n';

    return 0;
}
