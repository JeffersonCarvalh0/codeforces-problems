// TLE
# include <iostream>
# include <algorithm>
# include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, q, a[100005], j;
    map<int, int> past_queries;

    cin >> n >> q;
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a + n);

    while (q--) {
        cin >> j;
        int coins = 0, cur = j;
        if (past_queries.find(j) != past_queries.end()) cout << past_queries[j] << '\n';
        else {
            for (int i = n - 1; i >= 0; --i) if (a[i] <= cur) cur -= a[i], ++coins;
            if (cur == 0) cout << coins << '\n', past_queries[cur] = coins;
            else cout << "-1\n", past_queries[cur] = -1;
        }
    }

    return 0;
}
