// Accepted after the contest was over
# include <iostream>
# include <map>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, q, j, cur;
    map<ll, ll> a;

    cin >> n >> q;
    for (ll i = 0; i < n; ++i) cin >> cur, ++a[cur];

    while (q--) {
        cin >> j;
        ll coins = 0;
        for (auto it = a.rbegin(); it != a.rend() && j > 0; ++it) {
            if (it->first <= j) {
                coins += min(j / it->first, it->second);
                j -= min((j / it->first) * it->first, it->first * it->second);
            }
        }

        if (j == 0) cout << coins << '\n';
        else cout << "-1\n";
    }

    return 0;
}
