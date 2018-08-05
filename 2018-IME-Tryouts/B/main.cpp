# include <iostream>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s, ans = "";
    bool charged[100];

    cin >> s;

    for (int i = 0; i < s.size(); ++i) charged[i] = false;

    for (int i = 0; i < s.size(); ++i) {
        if (i > 1 && !charged[i - 1] && !charged[i - 2]) {
            if (s[i] == 'C' && s[i - 1] == 'C' && s[i - 2] == 'C') ans += "P", charged[i] = true;
            else if (s[i] == 'S' && s[i - 1] == 'S' && s[i - 2] == 'S') ans += "T", charged[i] = true;
            else {
                if (s[i] == 'C') ans += "B";
                else ans += "D";
            }
        }

        else {
            if (s[i] == 'C') ans += "B";
            else ans += "D";
        }
    }

    cout << ans << '\n';

    return 0;
}
