# include <iostream>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, count = 0;
    string a[105], b[105];

    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (a[i] == b[j]) { a[i] = b[j] = ""; ++count; break; }

    cout << n - count << '\n';

    return 0;
}
