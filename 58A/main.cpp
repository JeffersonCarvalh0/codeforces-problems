# include <iostream>
# include <string>

using namespace std;

bool found[5];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;

    cin >> s;

    for (auto &ch : s) {
        if (!found[0] && ch == 'h') found[0] = true;
        else if (found[0] && !found[1] && ch == 'e') found[1] = true;
        else if (found[0] && found[1] && !found[2] && ch == 'l') found[2] = true;
        else if (found[0] && found[1] && found[2] && !found[3] && ch == 'l') found[3] = true;
        else if (found[0] && found[1] && found[2] && found[3] && !found[4] && ch == 'o') found[4] = true;
    }

    if (found[0] && found[1] && found[2] && found[3] && found[4]) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
