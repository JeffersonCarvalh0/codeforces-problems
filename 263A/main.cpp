# include <cstdio>

inline int abs(int a) { return a < 0 ? a*(-1) : a; }

int main() {
    int mat[5][5], i1, j1;

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] == 1) { i1 = i; j1 = j; }
        }
    }
    printf("%d\n", abs(i1 - 2) + abs(j1 - 2));
    return 0;
}
