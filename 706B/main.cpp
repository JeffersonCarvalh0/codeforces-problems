# include <iostream>
# include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, x[100000], q, m;

    cin >> n;
    for (int i = 0; i < n; ++i) cin >> x[i];
    sort(x, x + n);

    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> m;
        int *idx = upper_bound(x, x + n, m);
        cout << idx - x << '\n';
    }

    return 0;
}
