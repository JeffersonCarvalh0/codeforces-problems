# include <iostream>
# include <string>
# include <set>

using namespace std;

struct str_cmp {
    bool operator ()(const string &lhs, const string &rhs) { return lhs.size() < rhs.size(); }
};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    string cur;
    multiset<string, str_cmp> strings;

    cin >> n;
    while(n--) { cin >> cur; strings.insert(cur); }

    for (auto it = strings.begin(); it != prev(strings.end()); ++it) {
        if (next(it)->find(*it) == string::npos) { cout << "NO\n"; return 0; }
    }

    cout << "YES\n";
    for (auto &str : strings) cout << str << '\n';

    return 0;
}
