# include <iostream>
# include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, max_idx = 0, min_idx = 0, movements = 0;

    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    for (int i = n - 1; i >= 0; --i) if (a[i] >= a[max_idx]) max_idx = i;
    movements += max_idx;

    for (int i = 0; i < n; ++i) if (a[i] <= a[min_idx]) min_idx = i;
    movements += n - 1 - min_idx;
    movements -= (max_idx > min_idx);

    cout << movements << '\n';

    return 0;
}
