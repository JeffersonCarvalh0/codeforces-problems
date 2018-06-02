# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, ans, t_l, t_r;
    vector<bool> l(10005);
    vector<bool> r(10005);

    cin >> n;
    for(int i = 0; i < n; ++i) { cin >> t_l >> t_r; l[i] = t_l; r[i] = t_r; }

    int count_0 = count(l.begin(), l.begin() + n, 0);
    int count_1 = n - count_0;
    ans = count_0 < count_1 ? count_0 : count_1;

    count_0 = count(r.begin(), r.begin() + n, 0);
    count_1 = n - count_0;
    ans += count_0 < count_1 ? count_0 : count_1;

    cout << ans << '\n';

    return 0;
}
