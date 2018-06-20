# include <iostream>
# include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int r, d, n, xi, yi, ri, count = 0;

    cin >> r >> d >> n;
    while (n--) {
        cin >> xi >> yi >> ri;
        double dist = hypot(xi, yi);
        if (dist - ri >= (r - d) && dist + ri <= r) ++count;
    }

    cout << count << '\n';

    return 0;
}
