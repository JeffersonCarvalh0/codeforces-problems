# include <iostream>
# include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, a[1005], ans;
    multiset<int> b;

    cin >> n >> m;
    for (int i = 0; i < m; ++i) cin >> a[i], b.insert(a[i]);

    ans = 0;
    for (int i = n; i > 0; --i) {
        auto it = prev(b.end());
        int cur = *it;
        ans += cur; b.erase(it);
        if (cur - 1 != 0) b.insert(cur - 1);
    }

    cout << ans << ' ';

    b.clear();
    for (int i = 0; i < m; ++i) b.insert(a[i]);

    ans = 0;
    for (int i = n; i > 0; --i) {
        auto it = b.begin();
        int cur = *it;
        ans += cur; b.erase(it);
        if (cur - 1 != 0) b.insert(cur - 1);
    }

    cout << ans << '\n';

    return 0;
}
