# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, cur, max_p, min_p, amazing = 0;

    cin >> n >> cur;
    max_p = cur; min_p = cur;
    for (int i = 0; i < n; ++i) {
        cin >> cur;
        if (cur > max_p) { max_p = cur; ++amazing; }
        if (cur < min_p) { min_p = cur; ++amazing; }
    }

    cout << amazing << '\n';

    return 0;
}
