// Not finished yet
# include <iostream>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, k;

    cin >> n >> k;

    if (k == 1) cout << 1 << '\n';
    if (k <= n / 2) cout << k + (k - 1) << '\n';
    else cout << ((k - (n/2)) - (n & 1)) * 2 << '\n';

    return 0;
}
