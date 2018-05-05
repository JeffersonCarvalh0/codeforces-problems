// Kinda naive way, but got accepted

# include <iostream>
# include <set>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, cur;
    multiset<int> a, b, c;

    cin >> n;

    for (int i = 0; i < n; ++i) { cin >> cur; a.insert(cur); }
    auto it1 = a.begin();

    for (int i = 0; i < n - 1; ++i) { cin >> cur; b.insert(cur); }
    auto it2 = b.begin();
    for (; it2 != b.end() && *it1 == *it2; ++it1, ++it2);
    cout << *it1 << '\n';

    for (int i = 0; i < n - 2; ++i) { cin >> cur; c.insert(cur); }
    auto it3 = c.begin();
    for (it2 = b.begin(); it3 != c.end() && *it2 == *it3; ++it2, ++it3);
    cout << *it2 << '\n';

    return 0;
}
