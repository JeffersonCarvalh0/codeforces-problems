# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, req, ac = 0, ans = 0;

    cin >> n;
    while (n--) {
        cin >> req;
        ac += req;
        if (ac < 0) { ans += ac; ac = 0; }
    }

    cout << ans * -1 << '\n';

    return 0;
}
