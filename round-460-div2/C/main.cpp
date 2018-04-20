# include <iostream>

using namespace std;

int main() {

    int n, m, k;
    int counterRow, counterCol, total;
    char mat[2000][2000];

    cin >> n >> m >> k;

    counterRow = counterCol = total = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> mat[i][j];

            if (mat[i][j] == '.') {
                ++counterRow;
            } else {
                auto calc = counterRow + (1 - k);
                total += (calc > 0) ? calc : 0;
                counterRow = 0;
            }
        }
        auto calc = counterRow + (1 - k);
        total += (calc > 0) ? calc : 0;
        counterRow = 0;
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (mat[j][i] == '.')
                ++counterCol;
            else {
                auto calc = counterCol + (1 - k);
                total += (calc > 0) ? calc : 0;
                counterCol = 0;
            }
        }
        auto calc = counterCol + (1 - k);
        total += (calc > 0) ? calc : 0;
        counterCol = 0;
    }

    cout << total << endl;

    return 0;
}
