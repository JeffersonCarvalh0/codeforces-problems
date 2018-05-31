# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int k, l, m, n, d, dragon, damaged = 0;

    cin >> k >> l >> m >> n >> d;
    for (int i = 1; i <= d; ++i) {
        cin >> dragon;
        damaged += (!(i % k) || !(i % l) || !(i % m) || !(i % n));
    }

    cout << damaged << '\n';

    return 0;
}
