# include <iostream>
# include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int k, a[12], counter = 0, sum = 0;

    cin >> k;
    for (int i = 0; i < 12; ++i) cin >> a[i];
    sort(a, a + 12);

    for (int i = 11; sum < k && i >= 0; --i) { sum += a[i]; ++counter; }

    if (sum < k) cout << "-1\n";
    else cout << counter << '\n';

    return 0;
}
