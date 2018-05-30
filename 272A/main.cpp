# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, f, fingers = 0, p = 0;

    cin >> n;
    for (int i = 0; i < n; ++i) { cin >> f; fingers += f; } ++n;
    for (int i = 1; i <= 5; ++i ) p += !((fingers + i) % n == 1);
    cout << p << '\n';

    return 0;
}
