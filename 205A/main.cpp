# include <iostream>
# include <utility>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, cur;
    vector<pair<int, int>> cities(100005);

    cin >> n;
    for (int i = 0; i < n; ++i) { cin >> cur; cities[i] = make_pair(cur, i + 1); }
    sort(cities.begin(), cities.begin() + n);

    if (cities[0].first == cities[1].first) cout << "Still Rozdil\n";
    else cout << cities[0].second << '\n';

    return 0;
}
