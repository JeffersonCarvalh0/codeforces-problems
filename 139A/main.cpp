# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, days[7];

    cin >> n;
    for (int i = 0; i < 7; ++i) cin >> days[i];

    int i = 0; while (true) { n -= days[i]; if (n <= 0) break; i = (i + 1) % 7; }
    cout << i + 1 << '\n';

    return 0;
}
