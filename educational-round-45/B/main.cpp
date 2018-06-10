# include <iostream>
# include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k, cur;
    multiset<int> ordered;

    cin >> n >> k;
    for (int i = 0; i < n; ++i) { cin >> cur; ordered.insert(cur); }

    for (auto it = ++ordered.begin(); it != ordered.end();) {
        if (*it > *prev(it) && *it <= *prev(it) + k) ordered.erase(prev(it));
        else ++it;
    }

    cout << ordered.size() << '\n';

    return 0;
}
