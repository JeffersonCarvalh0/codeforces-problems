# include <iostream>
# include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, a[105], sum = 0;

    cin >> n >> m;
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a + n);

    for (int i = 0; i < m; ++i) if (a[i] < 0) sum += a[i];

    cout << sum * -1 << '\n';

    return 0;
}
