# include <iostream>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string s;
    int m, l, r, dp[100001];

    cin >> s >> m;
    dp[0] = 0;
    for (size_t i = 1; i <= s.size(); ++i) dp[i] = dp[i - 1] + (s[i] == s[i - 1]);

    while (m--) {
        cin >> l >> r;
        cout << dp[--r] - dp[--l] << '\n';
    }

    return 0;
}
