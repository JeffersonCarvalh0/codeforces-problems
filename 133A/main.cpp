# include <iostream>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;

    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'H' || s[i] == '9' || s[i] == 'Q') { cout << "YES\n"; return 0; }
    }

    cout << "NO\n";

    return 0;
}
