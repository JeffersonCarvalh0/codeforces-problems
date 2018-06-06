// Not done yet
# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k, l, c, d, p, nl, np, total_liq, total_lim;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    total_liq = k * l; total_lim = c * d;

    if (total_liq / nl >= n && total_lim >= n && p/np >= n)
        cout << min(total_liq/nl, min(total_lim, p/np));
    else cout << 0;

    cout << '\n';

    return 0;
}
