# include <iostream>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string s;
    int n, counter = 0;

    cin >> n >> s;

    for (int i = 1; i < n; ++i) if (s[i] == s[i - 1]) ++counter;
    cout << counter << '\n';

    return 0;
}
