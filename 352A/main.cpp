// WA
# include <iostream>
# include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, a, count_5 = 0, count_0;

    cin >> n;
    for (int i = 0; i < n; ++i) { cin >> a; count_5 += (a == 5); }
    count_0 = n - count_5;

    if (count_5 < 18 && count_0 == 0) { cout << "-1\n"; }
    else {
        while (((count_5 * 5 * (int)pow(10, count_0))) % 90 != 0) --count_5;
        for (int i = 0; i < count_5; ++i) cout << 5;

        if (count_5 == 0) cout << 0;
        else while (count_0--) cout << 0;
        cout << '\n';
    }

    return 0;
}
