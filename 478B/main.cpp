# include <iostream>

typedef unsigned long long ull;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m;
    ull pairs_min = 0, pairs_max = 0;
    cin >> n >> m;

    ull d = n / m;
    ull mod = n % m;
    pairs_min = (((d + 1) * d) / 2) * mod;
    pairs_min += ((d * (d - 1)) / 2) * (m - mod);

    ull qtd = n - m + 1;
    pairs_max = ((qtd * (qtd - 1)) / 2);

    cout << pairs_min << ' ' << pairs_max << '\n';

    return 0;
}
