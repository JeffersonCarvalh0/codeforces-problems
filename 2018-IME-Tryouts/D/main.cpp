// TLE
# include <iostream>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    ll sum, s, k;

    cin >> n;
    while (n--) {
        cin >> s;
        sum = k = 0;
        for (ll i = 1; i <= s; ++i) {
            if (sum + i <= s) { sum += i; ++k; }
            else break;
        }
        cout << k << '\n';
    }

    return 0;
}
