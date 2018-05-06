// Got WA at the contest because of the corner case when k = 0. This code fixed this and was accepted after the contest.

# include <iostream>
# include <set>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, k, cur;
    multiset<int> a;

    cin >> n >> k;

    for (int i = 0; i < n; ++i) { cin >> cur; a.insert(cur); }

    auto it = a.begin();
    if (a.size() < k) cout << "-1\n";
    else if (a.size() == k) cout << *a.rbegin() << '\n';
    else if (k == 0 && *a.begin() > 1) cout << *a.begin() - 1 << '\n';
    else if (k == 0 && *a.begin() == 1) cout << "-1\n";
    else {
        advance(it, k - 1);
        if (next(it) != a.end() && *next(it) == *it) cout << "-1\n";
        else cout << *it << '\n';
    }

    return 0;
}
