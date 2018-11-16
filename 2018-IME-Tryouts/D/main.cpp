# include <iostream>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    ll k, s;

    cin >> n;
    while (n--) {
        cin >> s;
        k = (s + 1) * s / 2
        cout << k << '\n';
    }

    return 0;
}
