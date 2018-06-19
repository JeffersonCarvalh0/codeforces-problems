# include <iostream>
# include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.setf(ios::fixed);
    int a, b, n, x, y, v;
    double min_time = 1e5;

    cin >> a >> b >> n;

    for (int i = 0; i < n; ++i) {
        cin >> x >> y >> v;
        min_time = min(min_time, sqrt((x - a)*(x - a) + (y - b)*(y - b))/v);
    }

    cout << setprecision(20) << min_time << '\n';

    return 0;
}
