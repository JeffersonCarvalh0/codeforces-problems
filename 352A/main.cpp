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

    if (sum < 90 && count_0 == 0) { cout << "-1\n"; return 0; }
    else if (sum < 45 && count_0 > 0) { cout << "0\n"; return 0; }
    else if ((sum >= 45 && count_0 > 0) || sum >= 90) while (count_5 % 9 != 0) --count_5;

    while (count_5--) cout << 5;
    while (count_0--) cout << 0;

    cout << '\n';

    return 0;
}
