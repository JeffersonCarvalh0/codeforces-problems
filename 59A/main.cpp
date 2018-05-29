# include <iostream>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;
    int lower_counter = 0, upper_counter = 0;

    cin >> s;
    for (auto &ch : s) ch <= 'Z' ? ++upper_counter : ++lower_counter;

    for (size_t i = 0; i < s.size(); ++i) {
        if (lower_counter >= upper_counter) s[i] |= 32;
        else s[i] &= ~32;
    }

    cout << s << '\n';
    return 0;
}
