# include <iostream>
# include <map>
# include <list>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, count = 0, a[50];
    map<int, int> found;
    list<int> ans;

    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];

    for (int i = n - 1; i >= 0; --i) {
        if (found.find(a[i]) == found.end()) {  found[a[i]] = 1; ans.push_back(a[i]); ++count; }
    }

    cout << count << '\n';
    for (auto it = ans.rbegin(); it != ans.rend(); ++it) cout << *it << ' ';
    cout << '\n';

    return 0;
}
