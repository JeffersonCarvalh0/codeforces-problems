# include <iostream>
# include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k, cur;
    map<int, int> a;

    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> cur;
        if (a.find(cur) == a.end()) a[cur] = i + 1;
    }

    if (a.size() < k) cout << "NO\n";
    else {
        cout << "YES\n";
        int i = 0;
        for (auto &e : a) {
            if (i >= k) break;
            cout << e.second; if (i != k - 1) cout << ' ';
            ++i;
        }
        cout << '\n';
    }
    return 0;
}
