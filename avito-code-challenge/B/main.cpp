# include <iostream>
# include <map>

typedef unsigned long long ull;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ull n, a, x, total = 0;
    map<ull, ull> ans;

    cin >> n;
    while (n--) { cin >> a >> x; ans[a] = x; }

    cin >> n;
    while (n--) {
        cin >> a >> x;
        auto e = ans.find(a);
        if (e != ans.end() && x > ans[a]) ans[a] = x;
        else if (e == ans.end()) ans[a] = x;
    }

    for (auto &e : ans) total += e.second;
    cout << total << '\n';
    return 0;
}
