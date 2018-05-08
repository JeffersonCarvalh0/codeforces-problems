# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int k2, k3, k5, k6, sum = 0;

    cin >> k2 >> k3 >> k5 >> k6;

    if (k5 && k6) {
        if (k2 < k5 && k2 < k6) { sum = 256 * k2; k2 = 0; }
        else { sum = 256 * min(k5, k6); k2 -= min(k5, k6); }
    }

    if (k2) sum += 32 * min(k2, k3);

    cout << sum << '\n';

    return 0;
}
