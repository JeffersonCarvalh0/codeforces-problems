# include <iostream>
# include <vector>

using namespace std;

struct Point {
    int x, y;
    Point(int x = 0, int y = 0): x(x), y(y) {};
};

inline bool collinear(Point &gun, Point &s1, Point &s2) {
    return (gun.y - s1.y) * (gun.x - s2.x) == (gun.y - s2.y) * (gun.x - s1.x);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, x0, y0, xi, yi, shoots = 0;

    cin >> n >> x0 >> y0;
    vector<Point> strm(n);
    vector<bool> alive(n, true);

    Point gun(x0, y0);
    for (int i = 0; i < n; ++i) {
        cin >> xi >> yi;
        strm[i] = Point(xi, yi);
    }

    for (int i = 0; i < n; ++i) {
        if (alive[i]) {
            for (int j = i + 1; j < n; ++j) {
                if (alive[j] && collinear(gun, strm[i], strm[j])) alive[j] = false;
            }

            alive[i] = false; ++shoots;
        }
    }

    cout << shoots << '\n';

    return 0;
}
