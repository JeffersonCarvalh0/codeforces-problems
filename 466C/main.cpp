# include <iostream>
# include <vector>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    ll a[500005], sum = 0, cur_sum = 0, k = 0;
    vector<int> left, right;

    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i], sum += a[i];

    if (sum % 3 != 0 || n < 2) { cout << "0\n"; return 0; }

    for (int i = 0; i < n - 1; ++i) {
        cur_sum += a[i];
        if (cur_sum == sum / 3) left.push_back(i);
        if (cur_sum == (2 * sum) / 3) right.push_back(i);
    }

    for (int i = 0; i < left.size(); ++i)
        k += right.end() - lower_bound(right.begin(), right.end(), left[i] + 1);

    cout << k << '\n';

    return 0;
}
