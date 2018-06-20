# include <iostream>
# include <algorithm>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    ll a[100005];

    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a + n);

    for (int i = 0; i < n - 2; ++i) {
        if (a[i] + a[i + 1] > a[i + 2]) { cout << "YES\n"; return 0; }
    }

    cout << "NO\n";

    return 0;
}
