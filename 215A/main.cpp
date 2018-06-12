# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, a[55], b[55], max_ratio = 0, count = 0;

    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    cin >> m;
    for (int i = 0; i < m; ++i) cin >> b[i];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (b[j] % a[i] == 0 && b[j] / a[i] > max_ratio) max_ratio = b[j] / a[i];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (b[j] % a[i] == 0 && b[j] / a[i] == max_ratio) ++count;
        }
    }

    cout << count << '\n';

    return 0;
}
