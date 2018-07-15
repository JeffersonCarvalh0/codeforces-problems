# include <iostream>
# include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, a[120005], ans = 0;
    map<int, int> m;

    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i], ++m[a[i]];

    for (int i = 0; i < n; ++i) {
        bool ok = false;
        for (int d = 0; d < 32; ++d) {
            int num = (1 << d) - a[i];
            if (m.count(num) && (m[num] > 1 || (m[num] == 1 && num != a[i]))) ok = true;
        }
        if (!ok) ++ans;
    }

    cout << ans << '\n';

    return 0;
}
