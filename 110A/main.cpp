# include <iostream>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int count = 0;
    string s;
    cin >> s;

    for (auto &ch : s) if (ch == '4' || ch == '7') ++count;
    if (count == 4 || count == 7) cout << "YES\n"; else cout << "NO\n";

    return 0;
}
