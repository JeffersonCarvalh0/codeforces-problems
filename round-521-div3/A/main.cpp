# include <iostream>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t, a, b, k;

    cin >> t;

    while (t--) {
        cin >> a >> b >> k;
        cout << (a - b) * (k / 2) + ((k & 1) * a) << '\n';
    }

    return 0;
}
