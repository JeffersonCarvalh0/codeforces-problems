# include <iostream>
# include <cmath>

using namespace std;

int min(int a, int b) { return a < b ? a : b; }

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, s[5] = {0, 0, 0, 0, 0}, cur, taxis = 0;

    cin >> n;
    while (n--) { cin >> cur; ++s[cur]; }

    taxis += s[4];

    if (s[3] != 0) {
        cur = min(s[3], s[1]);
        taxis += cur; s[1] -= cur; s[3] -= cur;
        taxis += s[3];
    }

    taxis += (s[2] / 2); s[2] = s[2] % 2;
    if (!s[1] && s[2]) ++taxis;

    if (s[1] && s[2]) { ++taxis; if (s[1] <= 2) s[1] = 0; else s[1] -= 2; }
    if (s[1]) { taxis += s[1] / 4; s[1] %= 4; if (s[1]) ++taxis; }

    cout << taxis << '\n';

    return 0;
}
