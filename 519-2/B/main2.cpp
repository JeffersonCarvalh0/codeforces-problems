// Better way
# include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, cur, a = 0, b = 0, c = 0;

    cin >> n;

    for (int i = 0; i < n; ++i) { cin >> cur; a += cur; }

    for (int i = 0; i < n - 1; ++i) { cin >> cur; b += cur; }
    cout << a - b << '\n';

    for (int i = 0; i < n - 2; ++i) { cin >> cur; c += cur; }
    cout << b - c << '\n';

    return 0;
}
