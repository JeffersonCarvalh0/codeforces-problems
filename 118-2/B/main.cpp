// Gave up. These spaces after the lines were making me nuts. WA just because of them.
# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i <= n; ++i) {
        for (int j = n - i; j > 0; --j) cout << "  ";
        int k; for (k = 0; k <= i; ++k) { cout << k; if (i != 0) cout << ' '; }
        for (k -= 2; k >= 0; --k) { cout << k;  if (k != i) cout << ' '; }
        cout << '\n';
    }

    for (int i = n - 1; i >= 0; --i) {
        for (int j = n - i; j > 0; --j) cout << "  ";
        int k; for (k = 0; k <= i; ++k) { cout << k; if (i != 0) cout << ' '; }
        for (k -= 2; k >= 0; --k) { cout << k; if (k != i) cout << ' '; }
        cout << '\n';
    }

    return 0;
}
