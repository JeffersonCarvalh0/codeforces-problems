# include <iostream>
# include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m, a[100000], l[100000], ps[100000], total = 0;
    map<int, int> count;

    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (count.find(a[i]) == count.end()) { count[a[i]] = 1; ++total; }
        else ++count[a[i]];
    }
    for (int i = 0; i < m; ++i) cin >> l[i];

    ps[0] = 0;
    for (int i = 1; i < n; ++i) { --count[a[i - 1]]; ps[i] = count[a[i - 1]] == 0 ? ps[i - 1] + 1 : ps[i - 1]; }
    for (int i = 0; i < m; ++i) cout << total - ps[l[i] - 1] << '\n';
}
