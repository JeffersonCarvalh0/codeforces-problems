// RTE on test 5

# include <iostream>
# include <vector>
# include <set>

using namespace std;

void merge(set<int> &a, set<int> &b) {
    set<int> temp = b;
    temp.insert(*a.rbegin());
    a = temp;
}

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, a[100001], lis_id;
    vector<set<int>> ans(100001);

    cin >> n;
    for (int i = 1; i <= n; ++i) { cin >> a[i]; ans[i].insert(i); }

    lis_id = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i; ++j) {
            if (a[i] == a[j] + 1 && ans[j].size() + 1 > ans[i].size()) {
                merge(ans[i], ans[j]); if (ans[i].size() > ans[lis_id].size()) lis_id = i;
            }
        }
    }

    cout << ans[lis_id].size() << '\n';
    for (auto &id : ans[lis_id]) cout << id << ' ';
    cout << '\n';

    return 0;
}
