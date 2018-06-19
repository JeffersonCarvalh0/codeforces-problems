# include <iostream>
# include <cmath>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll r, x, y, xl, yl;
    float d;

    cin >> r >> x >> y >> xl >> yl;
    d = 2 * r;

    cout << ceil(sqrt((x - xl)*(x - xl) + (y - yl)*(y - yl)) / d) << '\n';

    return 0;
}
