# include <iostream>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s, t;

    cin >> s >> t;

    for (int i = 0, j = s.size() - 1; i < s.size(); ++i, --j) {
        if (s[i] != t[j]) { cout << "NO\n"; return 0; }
    }

    cout << "YES\n";

    return 0;
}
