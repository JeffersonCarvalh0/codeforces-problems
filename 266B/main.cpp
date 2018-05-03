# include <iostream>

using namespace std;

void swap(char *x, int i, int j) {
    int aux = x[i];
    x[i] = x[j];
    x[j] = aux;
}

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, t;
    char *x;

    cin >> n >> t;
    x = new char[n];

    for (int i = 0; i < n; ++i) cin >> x[i]; // BGGBG GBGBG GGBBG

    while (t--) {
        for (int i = 0; i < n; ++i) {
            if (x[i] == 'B' && x[i + 1] == 'G') { swap(x, i, i + 1); ++i; }
        }
    }

    for (int i = 0; i < n; ++i) cout << x[i];
    cout << '\n';

    return 0;
}
