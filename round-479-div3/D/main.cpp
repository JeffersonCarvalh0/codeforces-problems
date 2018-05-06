// Sent after the contest was over

# include <iostream>
# include <list>
# include <unordered_set>
# include <algorithm>

typedef unsigned long long ull;

using namespace std;

void func(unordered_set<ull> &a, list<ull> &ans, ull cur) {
    ull d = cur/3, m = cur*2;
    if (cur % 3 == 0 && a.find(d) != a.end() && find(ans.begin(), ans.end(), d) == ans.end()) {
        ans.push_back(cur); func(a, ans, d);
    } else if (a.find(m) != a.end() && find(ans.begin(), ans.end(), m) == ans.end()) {
        ans.push_back(cur); func(a, ans, m);
    } else if (ans.size() == a.size() - 1 && find(ans.begin(), ans.end(), cur) == ans.end()) ans.push_back(cur);
}

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    ull cur;
    unordered_set<ull> a;
    list<ull> ans;

    cin >> n;
    for (int i = 0; i < n; ++i) { cin >> cur; a.insert(cur); }

    for (auto &e : a) {
        ans.clear();
        func(a, ans, e);
        if (ans.size() == n) {
            for (auto &i : ans) cout << i << ' ';
            cout << '\n';
            break;
        }
    }
    return 0;
}
