// WA

# include <iostream>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll s = 0, cur_sum = 0, max_num = 0, n, a[500005], cnt[500005];

    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i], s += a[i];
    if (s % 3 != 0) cout << 0 << '\n';
    else {
        for (int i = n - 1; i >= 0; --i)
            cur_sum += a[i], cnt[i] = cur_sum == s / 3;

        if (n > 1) for (int i = n - 2; i >= 0; --i) cnt[i] += cnt[i + 1];

        for (int i = 0, cur_sum = 0; i < n; ++i) {
            cur_sum += a[i];
            if (cur_sum == s / 3 && i < n - 2) max_num += cnt[i + 2];
        }

        cout << max_num << '\n';
    }

    return 0;
}
