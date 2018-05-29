# include <iostream>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;

    cin >> s;
    for (size_t i = 0; i < s.size();) {
        if (s[i] == '.') { cout << 0; ++i; }
        if (s[i] == '-') {
            if (s[i + 1] == '.') cout << 1;
            if (s[i + 1] == '-') cout << 2;
            i += 2;
        }
    }
    cout << '\n';
    return 0;
}
