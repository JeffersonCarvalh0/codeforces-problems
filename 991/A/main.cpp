# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a, b, c, n;

    cin >> a >> b >> c >> n;

    int celebrating = (a - c) + (b - c) + c;

    if (c <= n && c <= a && c <= b && n - celebrating > 0)
        cout << n - celebrating << '\n';
    else
        cout << "-1\n";

    return 0;
}
