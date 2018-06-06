# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, a, b, cur = 0, max_p = -1;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        cur -= a; cur += b;
        if (cur > max_p) max_p = cur;
    }

    cout << max_p << '\n';

    return 0;
}
