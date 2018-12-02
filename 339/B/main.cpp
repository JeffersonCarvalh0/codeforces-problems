# include <iostream>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll m, n, cur = 1, next, ans = 0;

    cin >> n >> m;

    while (m--) {
        cin >> next;

        if (next >= cur) ans += abs(next - cur);
        else ans += n - abs(next - cur);

        cur = next;
    }

    cout << ans << '\n';

    return 0;
}
