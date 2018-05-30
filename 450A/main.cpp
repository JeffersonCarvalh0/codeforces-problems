# include <iostream>
# include <queue>
# include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, c;
    queue<pair<int, int>> children;
    pair<int, int> child;

    cin >> n >> m;
    for (int i = 1; i <= n; ++i) { cin >> c; children.push(make_pair(i, c)); }

    while (!children.empty()) {
        child = children.front();
        children.pop();
        if (child.second - m > 0) children.push(make_pair(child.first, child.second - m));
    }

    cout << child.first << '\n';
    return 0;
}
