# include <cstdio>

using namespace std;

int main() {
    int n, m, teams = 0;
    scanf("%d%d", &n, &m);

    while (n + m >= 3 && n > 0 && m > 0) {
        if (n <= m/2 && n > 0) { --n; m -= 2; ++teams; }
        else if (n >= 2 && m > 0) { n -= 2; --m; ++teams; }
    }
    printf("%d\n", teams);
    return 0;
}
