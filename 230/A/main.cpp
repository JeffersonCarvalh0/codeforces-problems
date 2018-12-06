# include <iostream>
# include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int s, n, x, y;
    pair<int, int> dragons[1005];

    cin >> s >> n;

    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        dragons[i] = { x, y };
    }

    sort(dragons, dragons + n);

    for (int i = 0; i < n; ++i) {
        if (s > dragons[i].first) s += dragons[i].second;
        else {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";

    return 0;
}
