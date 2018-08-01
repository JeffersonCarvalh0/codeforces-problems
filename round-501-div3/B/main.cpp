# include <iostream>
# include <string>
# include <vector>

using namespace std;

vector<int> a;

inline int f(string &s, string &t, int i, int j) {
    int moves = j - i;

    for (int k = j - 1; k >= i; --k) {
        a.push_back(k);
        char aux = s[k];
        s[k] = s[k + 1];
        s[k + 1] = aux;
    }

    return moves;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k = 0;
    string s, t;
    int chars_s[26], chars_t[26];

    for (int i = 0; i < 26; ++i) chars_s[i] = 0, chars_t[i] = 0;

    cin >> n >> s >> t;

    for (int i = 0; i < n; ++i) ++chars_s[int(s[i] - 'a')], ++chars_t[int(t[i] - 'a')];

    for (int i = 0; i < 26; ++i) {
        if (chars_s[i] != chars_t[i]) { cout << "-1\n"; return 0; }
    }

    for (int i = 0; i < n; ++i) {
        if (s[i] != t[i]) {
            for (int j = i + 1; j < n; ++j) {
                if (s[j] == t[i]) { k += f(s, t, i, j); break; }
            }
        }
    }

    if (k < 10000) {
        cout << k << '\n';
        if (k > 0) {
            for (int i = 0; i < a.size(); ++i) cout << a[i] + 1 << ' ';
            cout << '\n';
        }
    } else cout << "-1\n";

    return 0;
}
