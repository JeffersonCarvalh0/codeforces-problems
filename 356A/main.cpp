/*  TLE, too slow. This is the naive implementation */

# include <iostream>
# include <stack>

using namespace std;

struct Fight {
    int l, r, x;
    Fight(int l = 0, int r = 0, int x = 0): l(l), r(r), x(x) {}
};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, m, *knights, l, r, x;

    cin >> n >> m;
    knights = new int[n + 1];
    auto fights = stack<Fight>();

    for (int i = 1; i <= n; ++i)  knights[i] = i;

    for (int i = 0; i < m; ++i) {
        cin >> l >> r >> x;
        fights.push(Fight(l, r, x));
    }

    for (int i = 0; i < m; ++i) {
        for (int j = fights.top().l; j <= fights.top().r; ++j) {
            if (j == fights.top().x && i == 0) knights[j] = 0;
            else if (j != fights.top().x) knights[j] = fights.top().x;
        }
        fights.pop();
    }

    for (int i = 1; i <= n; ++i) cout << knights[i] << ' ';
    cout << endl;
    return 0;
}
