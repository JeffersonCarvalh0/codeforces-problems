// RTE
# include <iostream>
# include <string>

using namespace std;

inline int count(string &s) {
    int c = 0;
    for (int i = 1; i < s.size(); ++i) if (s[i] != s[i - 1]) ++c;
    return c;
}

inline void swap(string &s, int i1, int i2) { char aux = s[i1]; s[i1] = s[i2]; s[i2] = aux; }

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a, b, x;
    string s = "";

    cin >> a >> b >> x;
    for (int i = 0; i < a; ++i) s += '0';
    for (int i = 0; i < b; ++i) s += '1';

    int i1 = a - 1, i2 = a;
    while (count(s) != x) swap(s, i1, i2), i2 += 2, i1 -= 2;

    cout << s << '\n';

    return 0;
}
