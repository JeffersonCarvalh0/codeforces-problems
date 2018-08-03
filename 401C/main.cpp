# include <iostream>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m;
    string ans = "";

    cin >> n >> m;

    if ((n > m && (m >= n - 1)) || (m > n && (n >= ((m / 2) - 1) + (m & 1))) || (m == n)) {
        while (m > 0 && n > 0) {
            if (m > n + 1) ans += "110", m -= 2, --n;
            else if (n > m) ans += "01", --m, --n;
            else ans += "10", --m, --n;
        }

        while (n > 0) ans += "0", --n;
        while (m > 0) ans += "1", --m;

        cout << ans << '\n';
    } else cout << "-1\n";

    return 0;
}
