# include <iostream>

using namespace std;

int alphabet[26];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    char cur;

    cin >> n;

    while (cin >> cur) ++alphabet[int(cur) - 'a'];

    for (int i = 0; i < 26; ++i) {
        if (alphabet[i] % n != 0) {
            cout << "-1\n";
            return 0;
        } else alphabet[i] /= n;
    }

    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < 26; ++j) {
            for (int k = 0; k < alphabet[j]; ++k) cout << char('a' + j);
        }
    }

    cout << '\n';

    return 0;
}
