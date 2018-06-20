# include <iostream>
# include <iomanip>
# include <cmath>
# include <algorithm>

using namespace std;

const double PI = acos(-1);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.setf(ios::fixed);
    int n, r[105];
    double areas[105], area = 0.0;

    cin >> n;
    for (int i = 0; i < n; ++i) cin >> r[i];
    sort(r, r + n);

    for (int i = 0; i < n; ++i) areas[i] = PI * r[i] * r[i];
    for (int i = n - 1; i >= 0; i -= 2) {
        if (i > 0) area += areas[i] - areas[i - 1];
        else area += areas[i];
    }

    cout << setprecision(10) << area << '\n';

    return 0;
}
