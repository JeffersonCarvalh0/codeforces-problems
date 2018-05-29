# include <cstdio>

int main() {
    int times[3][3];
    bool grid[3][3];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d", &times[i][j]);
            grid[i][j] = 1;
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (times[i][j] & 1) {
                grid[i][j] = !grid[i][j];
                if (i > 0) grid[i - 1][j] = !grid[i - 1][j];
                if (j > 0) grid[i][j - 1] = !grid[i][j - 1];
                if (i < 2) grid[i + 1][j] = !grid[i + 1][j];
                if (j < 2) grid[i][j + 1] = !grid[i][j + 1];
            }
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) printf("%d", grid[i][j]);
        printf("\n");
    }

    return 0;
}
