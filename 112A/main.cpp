# include <iostream>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s1, s2;

    cin >> s1 >> s2;

    for (auto &ch : s1) ch |= 32;
    for (auto &ch : s2) ch |= 32;

    if (s1 == s2) cout << 0;
    else if (s1 < s2) cout << -1;
    else if (s2 < s1) cout << 1;

    cout << '\n';

    return 0;
}
