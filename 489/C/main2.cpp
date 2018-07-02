# include <iostream>
# include <string>

using namespace std;

inline bool check(int m, int s) { return s >= 0 && m * 9 >= s; }

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int m, s, cur;
    string min_num, max_num;

    cin >> m >> s;
    min_num = max_num = "";
    cur = s;

    if (!check(m, s) || (s == 0 && m > 1)) { cout << "-1 -1\n"; return 0; }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < 10; ++j) {
            if ((i > 0 || j > 0 || (m == 1 && j == 0)) && check(m - i - 1, cur - j)) {
                min_num += char(j + '0'); cur -= j; break;
            }
        }
    }

    cur = s;
    for (int i = 0; i < m; ++i) {
        for (int j = 9; j >= 0; --j) {
            if ((i > 0 || j > 0 || (m == 1 && j == 0)) && check(m - i - 1, cur - j)) {
                max_num += char(j + '0'); cur -= j; break;
            }
        }
    }

    cout << min_num << ' ' << max_num << '\n';

    return 0;
}
