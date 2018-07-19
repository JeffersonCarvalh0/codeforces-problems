# include <iostream>
# include <algorithm>
# include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k, a[2005], b[2005], sum = 0;
    multiset<int> biggest;

    cin >> n >> k;
    for (int i = 0; i < n; ++i) cin >> a[i], b[i] = a[i];
    sort(b, b + n);

    for (int i = 0; i < k; ++i) biggest.insert(b[n - i - 1]), sum += b[n - i - 1];

    cout << sum << '\n';
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        auto it = biggest.find(a[i]);
        if (it != biggest.end() && biggest.size() > 1)
            cout << ++cnt << ' ', cnt = 0, biggest.erase(it);
        else ++cnt;
    }

    cout << cnt << '\n';

    return 0;
}
