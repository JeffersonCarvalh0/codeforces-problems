# include <iostream>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, m, a, b, min_cost, tmp;

    cin >> n >> m >> a >> b;
    //     9    7    3    8

    if (n % m == 0) cout << "0\n";
    else {
        tmp = (m * ((n/m) + 1));
        min_cost = (tmp - n) * a;

        tmp = (m * (n/m));
        min_cost = min(min_cost, (n - tmp) * b);

        cout << min_cost << '\n';
    }

    return 0;
}
