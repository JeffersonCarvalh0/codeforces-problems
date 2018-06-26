// TLE
# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, a[100005];
    bool entered = false;

    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];

    while (!entered) {
        for (int i = 0; i < n; ++i) if (a[i] - i <= 0) {
            cout << i + 1 << '\n'; entered = true; break;
        }

        for (int i = 0; i < n; ++i) a[i] -= n;
    }

    return 0;
}
