# include <iostream>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, k;

    cin >> n >> k;

    if (k <= (n + 1) / 2) cout << k * 2 - 1;
    else cout << (k - (n + 1) / 2) * 2;
    cout << '\n';

    return 0;
}
