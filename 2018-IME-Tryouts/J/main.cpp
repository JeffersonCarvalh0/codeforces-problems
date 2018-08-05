// TLE
# include <iostream>
# include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, a[100005], k;
    multiset<int> past;

    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        k = 0;
        if (past.size() >= 1)
            for (auto it = past.rbegin(); it != past.rend() && *it >= a[i]; ++it, ++k);
        past.insert(a[i]);
        cout << n - k << '\n';
    }

    return 0;
}
