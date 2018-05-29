# include <iostream>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;

    cin >> n;
    if (n & 1) { cout << "-1\n"; return 0; }
    else for (int i = 0; i <= n - 2; i += 2) {
        cout << i + 2 << ' ' << i + 1;
        if (i != n - 2) cout << ' ';
    }
    cout << '\n';
    return 0;
}
