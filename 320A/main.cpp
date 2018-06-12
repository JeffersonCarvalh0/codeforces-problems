# include <iostream>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;

    cin >> s;

    if (s[0] != '1') { cout << "NO\n"; return 0; }

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != '1' && s[i] != '4') { cout << "NO\n"; return 0; }
        else if (s[i] == '4') {
            if (s[i - 1] == '4' && s[i - 2] == '4') { cout << "NO\n"; return 0; }
        }
    }

    cout << "YES\n";

    return 0;
}
