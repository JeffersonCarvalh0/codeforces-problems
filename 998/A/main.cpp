# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, a[10], min_value = 1005, ans;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < min_value) min_value = a[i], ans = i;
    }

    if (n < 2 || (n == 2 && a[0] == a[1])) cout << "-1\n";
    else cout << "1\n" << ans + 1 << '\n';

    return 0;
}
