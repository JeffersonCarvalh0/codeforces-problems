# include <iostream>
# include <list>

using namespace std;

inline int calculate(list<int> &a) {
    int total = 0;
    for (auto it1 = a.begin(), it2 = next(a.begin()); it1 != a.end() && it2 != a.end(); advance(it1, 2), advance(it2, 2))
        total += (*it2 - *it1);
    return total;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, cur, ans;
    list<int> a;

    cin >> n >> m;
    a.push_back(0);
    for (int i = 0; i < n; ++i) { cin >> cur; a.push_back(cur); }
    a.push_back(m);

    ans = calculate(a);

    for (auto it = next(a.begin()); it != a.end(); ++it) {
        if (*prev(it) + 1 < *it) {
            a.insert(it, *prev(it) + 1);
            ans = max(ans, calculate(a));
            it = a.erase(prev(it));
        }

        if (*it - 1 > *prev(it)) {
            a.insert(it, *it - 1);
            ans = max(ans, calculate(a));
            it = a.erase(prev(it));
        }
    }

    cout << ans << '\n';

    return 0;
}
