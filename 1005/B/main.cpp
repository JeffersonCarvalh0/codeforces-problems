# include <iostream>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s, t;
    int suffix = 0;

    cin >> s >> t;

    for (int i = s.size() - 1, j = t.size() - 1; i >= 0 || j >= 0; --i, --j, ++suffix)
        if (s[i] != t[j]) break;

    cout << (s.size() - suffix) + (t.size() - suffix) << '\n';

    return 0;
}
