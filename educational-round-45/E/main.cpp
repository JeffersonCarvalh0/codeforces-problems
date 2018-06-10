# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, k, cur_power, a[1000005], posts = 0, consec = 0, max_consec = 0, min_cost = 1000005, cur_blocked;
    bool s[1000005];

    cin >> n >> m >> k;
    for (int i = 0; i < m; ++i) s[i] = false;
    for (int i = 0; i < m; ++i) {
        cin >> cur_blocked; s[cur_blocked] = true;
    }
    for (int i = 0; i < m; ++i) {
        if (i > 0 && s[i] && s[i - 1]) ++consec;
        else { max_consec = max(max_consec, consec); consec = 0; }
    }

    for (int i = 0; i < k; ++i) cin >> a[i];

    if (s[0] || max_consec > k) cout << "-1\n";
    else {
        for (int i = 1; i <= k; ++i)
            if ((n / i) * a[i - 1] < min_cost && i > max_consec) cur_power = i;

        for (int i = 0; i < n;) {
            ++posts;

            for (int j = i + cur_power; j > i; --j) {
                if (!s[j]) i = j;
            }
        }
        cout << posts * a[cur_power] << '\n';
    }

    return 0;
}
