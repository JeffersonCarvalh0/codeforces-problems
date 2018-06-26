// Not finished yet
# include <iostream>
# include <vector>
# include <list>

using namespace std;

struct Move {
    int i, r, c;
    Move(int i = 0, int r = 0, int c = 0): i(i), r(r), c(c) {}
};

list<Move> moves;

int n;

inline void check_adj(vector<vector<int>> &pl, int &k) {
    for (int j = 0; j < n; ++j) {
        if (pl[1][j] != 0 && pl[1][j] == pl[0][j]) {
            pl[1][j] = 0; --k; moves.push_back(Move(pl[1][j], 1, j + 1));
        }

        if (pl[2][j] != 0 && pl[2][j] == pl[3][j]) {
            pl[2][j] = 0; --k; moves.push_back(Move(pl[2][j], 4, j + 1));
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int k, pos_i = 0, pos_j = 0;

    cin >> n >> k;
    vector<vector<int>> pl(4, vector<int>(n));

    check_adj(pl, k);

    for (int i = 1; i < 3; ++i)
        for (int j = 0; j < n; ++j)
            if (pl[i][j] == 0) { pos_i = i; pos_j = j; }

    if (pos_i == 0 && pos_j == 0) cout << "-1\n";
    else {
        int i = pos_i, j = pos_j;
        while (k) {
            if (i == 1) {
                if (j >= 0 && pl[i][j] == 0 && pl[i][j - 1] != 0) {
                    pl[i][j] = pl[i][j - 1]; pl[i][j - 1] = 0;
                    moves.push_back(Move(pl[i][j], i + 1, j + 1)); --j;
                }

                else if (j == 0 && pl[i][j] == 0 && pl[2][j] != 0) {
                    pl[i][j] = pl[2][j]; pl[2][j] = 0;
                    moves.push_back(Move(pl[i][j], i + 1, j + 1)); ++i;
                }
            }

            if (i == 2) {
                if (j < n && pl[i][j] == 0 && pl[i][j + 1] != 0) {
                    pl[i][j] = pl[i][j + 1]; pl[i][j + 1] = 0;
                    moves.push_back(Move(pl[i][j], i + 1, j + 1)); ++j;
                }

                if (j == n - 1 && pl[i][j] == 0 && pl[1][j] != 0) {
                    pl[i][j] = pl[1][j]; pl[1][j] = 0;
                    moves.push_back(Move(pl[i][j], i + 1, j + 1)); --i;
                }
            }
            if (i == pos_i && j == pos_j) check_adj(pl, k);
        }

        cout << moves.size() << '\n';
        for (auto &move : moves) cout << move.i << ' ' << move.c << ' ' << move.r << '\n';
    }

    return 0;
}
