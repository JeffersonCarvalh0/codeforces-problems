# include <iostream>
# include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, a[100000], l = -1, r = -1;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];

    for (int i = 1; i < n; ++i) {
        if (l == -1 && a[i - 1] > a[i]) l = i - 1;
        if (l != -1 && a[i + 1] > a[i]) { r = i; break; }
    }

    if (l != -1 && r == -1) r = n - 1;
    else if (l == -1 && r == -1) l = r = 0;

    reverse(a + l, a + r + 1);

    if (is_sorted(a, a + n)) cout << "yes\n" << l + 1 << ' ' << r + 1 << '\n';
    else cout << "no\n";

    return 0;
}
