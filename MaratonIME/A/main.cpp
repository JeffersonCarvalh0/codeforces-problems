# include <iostream>
# include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, cur;
    multiset<int> a;

    cin >> n;

    for (int i = 0; i < n; ++i) { cin >> cur; a.insert(cur); }
    for (auto &num : a) cout << num << ' ';
    cout << '\n';
}
