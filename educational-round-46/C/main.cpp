// TLE

# include <iostream>
# include <map>
# include <set>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    map<ll, ll> num;
    multiset<ll> start, end;
    int l, r, n;
    ll last, count = 0;

    cin >> n;
    for (int i = 0; i < n; ++i) { cin >> l >> r; start.insert(l); end.insert(r); }
    last = *end.rbegin();

    for (ll i = 0; i <= last; ++i) {
        count += start.count(i);
        ++num[count];
        count -= end.count(i);
    }

    for (int i = 1; i <= n; ++i) cout << num[i] << ' ';
    cout << '\n';

    return 0;
}
