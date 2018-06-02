# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, a, b, c, d;

    cin >> n;

    if (n == 0) cout << "0 0 0\n";
    else if (n == 1) cout << "0 0 1\n";
    else if (n == 2) cout << "0 1 1\n";
    else if (n == 3) cout << "1 1 1\n";
    else {
        a = 0; b = 1; c = 1; d = 2;
        while (true) {
            if (a + b + d < n) { a = b; b = c; c = d; d = b + c; }
            else if (a + b + d == n) break;
        }
        cout << a << ' ' << b << ' ' << d << '\n';
    }

    return 0;
}
