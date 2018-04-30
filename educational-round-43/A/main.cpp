# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, zeroes = 0, ones = 0;
    char *s;

    cin >> n;
    s = new char[n];

    for (int i = 0; i < n; ++i) { cin >> s[i]; s[i] == '0' ? ++zeroes : ++ones; }
    if (zeroes == 0) cout << 1;
    else if (ones == 0) cout << 0;
    else  { cout << 1; for (int i = 0; i < zeroes; ++i) cout << 0; }
    cout << '\n';
}
