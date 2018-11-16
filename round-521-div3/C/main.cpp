// TLE case 4

# include <iostream>
# include <map>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll sum = 0;
    int good[100005], k = 0, n;
    multimap<ll, int> m;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        ll cur; cin >> cur; sum += cur;
        m.insert({ cur, i });
    }

    for (auto &e : m) {
        ll new_sum = sum - e.first;
        auto it = m.end();

        if (!(new_sum & 1)) it = m.find(new_sum / 2);
        if (it != m.end() && it->second != e.second) good[k++] = e.second;
    }

    cout << k << '\n';
    for (int i = 0; i < k; ++i) cout << good[i] + 1 << ' ';
    cout << '\n';

    return 0;
}
