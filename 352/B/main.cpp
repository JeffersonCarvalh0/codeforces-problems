# include <iostream>
# include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, cur;
    map<int, int> pos, diffs;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> cur;
        if (pos.find(cur) == pos.end() && pos[cur] != -1) pos[cur] = i, diffs[cur] = 0;
        else {
            if (pos[cur] != -1) {
                if (diffs[cur] == 0) diffs[cur] = i - pos[cur], pos[cur] = i;
                else if (i - pos[cur] == diffs[cur]) pos[cur] = i;
                else pos[cur] = -1, diffs.erase(cur);
            }
        }
    }

    cout << diffs.size() << '\n';
    for (auto &diff : diffs) cout << diff.first << ' ' << diff.second << '\n';

    return 0;
}
