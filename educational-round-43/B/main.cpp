// Sent after the contest was finished - WA
# include <iostream>
# include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m;
    long long k;

    cin >> n >> m >> k;

    if (k < n) cout << k + 1 << ' ' << 1;
    else if (k <= n + m - 2) cout << n << ' ' << k - n + 1;
    else {
        long long cur, i, j;
        cur = k - (n + m - 2);
        i = ceil(cur / (m - 1));
        j = cur - ((i - 1) * (m - 1));
        cout << n - i << ' ' << m - j + 1;
    }
    cout << '\n';
    return 0;
}
