# include <iostream>
# include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, b, a[105], odd = 0, cuts = 0, total_cost = 0;
    multiset<int> costs;

    cin >> n >> b;
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) {
        odd += a[i] & 1;
        if (i != n - 1 && odd == (i + 1) - odd) costs.insert(abs(a[i] - a[i + 1]));
    }

    for (auto &cost : costs) if (total_cost + cost <= b) total_cost += cost, ++cuts;

    cout << cuts << '\n';

    return 0;
}
