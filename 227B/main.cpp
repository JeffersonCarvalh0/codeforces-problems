# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, a, h[100005], m, b;
    long long v = 0, p = 0;

    cin >> n;
    for (int i = 0; i < n; ++i) { cin >> a; h[a] = i; }
    cin >> m;

    while (m--) {
        cin >> b;
        v += h[b] + 1;
        p += n - h[b];
    }

    cout << v << ' ' << p << '\n';
    return 0;
}
