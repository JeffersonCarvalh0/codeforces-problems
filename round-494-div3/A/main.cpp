# include <iostream>
# include <set>
# include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, a, count = 0;
    vector<set<int>> pockets;

    cin >> n;
    pockets.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> a;
        for (int j = 0; j < n; ++j) {
            if (pockets[j].find(a) == pockets[j].end()) {
                pockets[j].insert(a); break;
            }
        }
    }

    for (int i = 0; i < n; ++i) if (pockets[i].size() > 0) ++count;

    cout << count << '\n';

    return 0;
}
