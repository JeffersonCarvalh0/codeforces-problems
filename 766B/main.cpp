# include <iostream>
# include <algorithm>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    ll a[100005];
    double p;

    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a + n);

    for (int i = 0; i < n - 2; ++i) {
        p = (a[i] + a[i + 1] + a[i + 2]) / 2.0;
        if (a[i] < p && a[i + 1] < p && a[i + 2] < p) { cout << "YES\n"; return 0; }
    }

    cout << "NO\n";

    return 0;
}
