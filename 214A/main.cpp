# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, counter = 0;

    cin >> n >> m;

    for (int i = 0; i <= 1000; ++i)
        for (int j = 0; j <= 1000; ++j)
            if ((i * i) + j == n && (i + (j * j)) == m) ++counter;

    cout << counter << '\n';

    return 0;
}
