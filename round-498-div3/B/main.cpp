// WA, lol
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
    int last_idx = -1;
    for (int i = 0, cnt = 0; i < n; ++i) {
        auto it = biggest.find(a[i]);
        if (it == biggest.end() && i == n - 1) cout << i - last_idx;
        else if (it != biggest.end() && i != 0) cout << i - last_idx << ' ', last_idx = i, biggest.erase(it);
        else if (it != biggest.end() && i == 0) biggest.erase(it), ++cnt;
    }

    cout <<'\n';

    return 0;
}
