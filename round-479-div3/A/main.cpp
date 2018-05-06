# include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, k;
    cin >> n >> k;

    while (k--) {
        if (n % 10 != 0) --n;
        else n /= 10;
    }

    cout << n << '\n';

    return 0;
}
