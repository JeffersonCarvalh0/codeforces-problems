# include <iostream>
# include <set>
# include <iterator>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, k, cur;
    multiset<int> a;

    cin >> n >> k;
    for (int i = 0; i < n; ++i) { cin >> cur; a.insert(cur); }

    auto it = a.begin();
    advance(it, k - 1);
    cout << *it << '\n';
}
