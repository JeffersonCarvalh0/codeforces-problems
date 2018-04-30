// Failing on test 43
# include <iostream>
# include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m, k, cur, res;
    multiset<int> a;

    cin >> n;
    for (int i = 0; i < n; ++i) { cin >> cur; a.insert(a.end(), cur); }

    cin >> m;
    for (int i = 0; i < m; ++i) { cin >> cur; a.insert(cur); }

    cin >> k;
    cur = 0;
    for (auto i = a.begin(), j = ++a.begin(); i != j && j != a.end();) {
        res = *j - *i;
        if (res > cur && res <= k) cur = res;
        if (res < k) ++j;
        if (res > k) ++i;
        if (res == k) break;
    }

    for (auto &num : a) cout << num << ' ';
    cout << '\n'; cout << cur << '\n';
    return 0;
}
