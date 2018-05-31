# include <iostream>

using namespace std;

inline int abs(int a) { return a < 0 ? a*(-1) : a; }

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, a[1005], ans1, ans2, min_height = 1000;

    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n - 1; ++i)
        if (abs(a[i + 1] - a[i]) < min_height) { ans1 = i; ans2 = i + 1; min_height = abs(a[i + 1] - a[i]); }
    if (abs(a[0] - a[n - 1]) < min_height) { ans1 = 0; ans2 = n - 1; }

    cout << ans1 + 1 << ' ' << ans2 + 1 << '\n';

    return 0;
}
