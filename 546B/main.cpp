# include <iostream>
# include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, a[3005], coins = 0;

    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];

    sort(a, a + n);

    for (int i = 1; i < n; ++i) {
        if (a[i] == a[i - 1]) ++a[i], ++coins;
        else if (a[i] < a[i - 1]) coins += (a[i - 1] + 1) - a[i], a[i] = a[i - 1] + 1;
    }

    cout << coins << '\n';

    return 0;
}
