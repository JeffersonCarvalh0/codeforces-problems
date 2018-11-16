# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k = 0;
    bool a[105];

    cin >> n;

    for (int i = 0; i < n; ++i) cin >> a[i];

    for (int i = 1; i < n - 1; ++i) {
        if (a[i - 1] && !a[i] && a[i + 1])
            a[i - 1] = 0, a[i + 1] = 0, ++k;
    }

    cout << k << '\n';

    return 0;
}
