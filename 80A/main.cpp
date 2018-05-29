# include <cstdio>

using namespace std;

int main() {
    int n, m;

    scanf("%d%d", &n, &m);

    int i, j;
    for (i = n + 1; i <= m; ++i) {
        for (j = 2; j <= i/2; ++j) if (i % j == 0) break;
        if (i < m && j == (i/2) + 1) { printf("NO\n"); break; }
        if (i == m && j == (i/2) + 1) printf("YES\n");
        else if (i == m && j <= i/2) printf("NO\n");
    }
    return 0;
}
