// WA
# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, a, count_5 = 0, sum = 0, count_0;

    cin >> n;
    for (int i = 0; i < n; ++i) { cin >> a; count_5 += (a == 5); }

    count_0 = n - count_5;
    sum = count_5 * 5;

    while ((count_5 * 5) % 9 != 0) --count_5;

    for (int i = 0; i < count_5; ++i) sum += 5;
    for (int i = 0; i < count_0; ++i) sum *= 10;

    if (sum % 90 == 0) {
        for (int i = 0; i < count_5; ++i) cout << 5;
        for (int i = 0; i < count_0; ++i) cout << 10;
    } else cout << "-1";

    cout << '\n';

    return 0;
}
