// Not finished yet
# include <iostream>
# include <vector>

using namespace std;

bool finished = false;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k, counter = 0, pos_i = 0, pos_j = 0;

    cin >> n >> k;
    vector<vector<int>> pl(4, vector<int>(n));

    for (int j = 0; j < n; ++j) {
        if (pl[1][j] == pl[0][j]) { pl[1][j] = 0; ++count; }
        if (pl[2][j] == pl[3][j]) { pl[2][j] = 0; ++count; }
    }

    for (int i = 1; i < 3; ++i)
        for (int j = 0; j < n; ++j)
            if (pl[i][j] == 0) { pos_i = i; pos_j = j; }

    if (pos_i == 0 && pos_j == 0) cout << "-1\n";
    else {
        while (!finished) {

        }
    }

    return 0;
}
