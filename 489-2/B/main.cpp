# include <iostream>
# include <algorithm>

using namespace std;

inline int abs(int a) { return a < 0 ? a*(-1) : a; }

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m, a[100], b[100], pairs = 0, sub;

    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    cin >> m;
    for (int j = 0; j < m; ++j) cin >> b[j];

    sort(a, a + n); sort(b, b + m);

    for (int i = n - 1, j = m - 1; i >= 0 && j >= 0;) {
        sub = abs(a[i] - b[j]);
        if (sub > 1) a[i] > b[j] ? --i : --j;
        else { ++pairs; --i; --j; }
    }

    cout << pairs << '\n';

    return 0;
}
