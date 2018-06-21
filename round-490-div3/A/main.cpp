# include <iostream>
# include <list>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k, cur, count = 0;
    list<int> a;

    cin >> n >> k;
    for (int i = 0; i < n; ++i) { cin >> cur; a.push_back(cur); }

    for (auto it = a.begin(); it != a.end();) {
        if (*it > k) break;
        ++count; a.erase(it++);
    }

    for (auto it = a.rbegin(); it != a.rend(); ++it) {
        if (*it > k) break;
        ++count;
    }

    cout << count << '\n';

    return 0;
}
