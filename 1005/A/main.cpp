# include <iostream>
# include <list>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, stairs = 0, cur, prev;
    list<int> steps;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> cur;
        if (cur == 1) ++stairs;
        if (cur == 1 && i != 0) steps.push_back(prev);
        prev = cur;
    }

    steps.push_back(cur);

    cout << stairs << '\n';
    for (auto &e : steps) cout << e << ' ';
    cout << '\n';

    return 0;
}
