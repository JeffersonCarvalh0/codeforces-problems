# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, bills = 0;
    int values[5] = { 1, 5, 10, 20, 100 };

    cin >> n;
    int i = 4;
    while (n > 0) {
        if (values[i] <= n) { n -= values[i]; ++bills; }
        else --i;
    }

    cout << bills << '\n';

    return 0;
}
