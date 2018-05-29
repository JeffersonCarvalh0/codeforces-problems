# include <iostream>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s1, s2;

    cin >> s1 >> s2;
    for (size_t i = 0; i < s1.size(); ++i) cout << ((s1[i] - '0') ^ (s2[i] - '0'));
    cout << '\n';

    return 0;
}
