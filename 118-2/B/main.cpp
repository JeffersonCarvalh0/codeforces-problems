// Not done yet
# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    for (int i = n; i >= 0; --i) {
        for (int j = 0; j <= n; ++j) {
            for (int k = 0; k < i; ++k) cout << "  ";
            for (int k = 0; k <= j; ++k) cout << k << ' ';
            for (int k = j - 1; k > 0; --k) cout << k << ' ';
        }
        cout << '\n';
    }



    return 0;
}
