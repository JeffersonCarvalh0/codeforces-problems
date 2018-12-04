# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, a, b;

    cin >> n >> a >> b;

    if (n - a > b) cout << b + 1 << '\n';
    else cout << n - a << '\n';
    
    return 0;
}
