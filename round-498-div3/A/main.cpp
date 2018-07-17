# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, cur;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> cur;
        if (!(cur & 1)) --cur;
        cout << cur << ' ';
    }

    cout << '\n';
    return 0;
}
