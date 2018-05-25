// WA for some reason. The codeforces test 6 seems wrong to me.

# include <iostream>
# include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, t, sum = 0, a[100000];

    cin >> n >> t;
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a + n);

    int i;
    for (i = 0; i < n; ++i) {
        sum += a[i];
        if (sum == t) { ++i; break; }
        if (sum > t) break;
    }

    cout << i << '\n';
    return 0;
}
