# include <iostream>
# include <algorithm>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m;
    ll ps[200001], letters[200001], cur, f, k;

    cin >> n >> m;
    ps[0] = 0;
    for (int i = 1; i <= n; ++i) { cin >> cur; ps[i] = ps[i - 1] + cur; }
    for (int i = 0; i < m; ++i) cin >> letters[i];

    for (int i = 0; i < m; ++i) {
        f = lower_bound(ps, ps + n + 1, letters[i]) - ps;
        k = (ps[f - 1] - letters[i]) * -1;
        cout << f << ' ' << k << '\n';
    }

}
