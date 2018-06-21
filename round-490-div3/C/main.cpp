# include <iostream>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k;
    string s;

    cin >> n >> k >> s;

    char cur = 'a';
    while (cur != '{') {
        int i;
        for (i = 0; i < s.size() && k > 0; ++i)
            if (s[i] == cur) { s[i] = ' '; --k; --i; }
        if (k <= 0) break;
        if (i >= s.size()) ++cur;
    }

    for (auto &ch : s) if (ch != ' ') cout << ch;
    cout << '\n';

    return 0;
}
