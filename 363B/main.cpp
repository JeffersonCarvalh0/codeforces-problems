# include <cstdio>

using namespace std;

int main() {
    int n, k, h[1000000];

    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i) scanf("%d", &h[i]);

    int s = 0, min, minIdx;
    for (int i = 0; i < k; ++i) s += h[i];
    min = s; minIdx = 0;

    int i = k;
    while (i < n) {
        s += h[i]; s -= h[i - k];
        if (s < min) { min = s; minIdx = i - k + 1; }
        ++i;
    }

    printf("%d\n", ++minIdx);

    return 0;
}
