# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, a[100005], ans = 1e9, ans_idx = 1e9;

    cin >> n;
    for (int i = 0; i < n; ++i) { cin >> a[i]; a[i] = max(a[i] - i, 0); }
    for (int i = 0; i < n; ++i) {
        a[i] = (a[i] / n) + (a[i] % n != 0);
        if (a[i] < ans) { ans = a[i]; ans_idx = i + 1; }
    }

    cout << ans_idx << '\n';

    return 0;
}
