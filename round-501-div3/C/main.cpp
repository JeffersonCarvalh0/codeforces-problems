# include <iostream>
# include <set>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, a, b, k = 0;
    ll sum = 0;
    multiset<ll> gain;

    cin >> n >> m;
    for (int i = 0; i < n; ++i) cin >> a >> b, sum += a, gain.insert(a - b);

    for (auto it = gain.rbegin(); it != gain.rend(); ++it) {
        if (sum > m) ++k, sum -= *it;
    }

    if (sum <= m) cout << k; else cout << "-1";
    cout << '\n';

    return 0;
}
