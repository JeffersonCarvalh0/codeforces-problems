# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m;
    char board[105][105];

    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> board[i][j];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (board[i][j] == '.')
                board[i][j] = (i + j) & 1 ? 'W' : 'B';
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cout << board[i][j];
        cout << '\n';
    }

    return 0;
}
