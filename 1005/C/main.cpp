# include <iostream>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, ok_qtd = 0;
    bool ok[120005];
    ll a[120005], sum;

    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            sum = a[i] + a[j];
            if (!(sum != 1 && (sum & (sum - 1)))) ok[i] = true, ok[j] = true;
        }
    }

    for (int i = 0; i < n; ++i) ok_qtd += ok[i];

    cout << n - ok_qtd << '\n';

    return 0;
}
