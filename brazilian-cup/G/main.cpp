// Wrong
# include <cstdio>

using namespace std;

int fat(int n) {
    if (n == 0) return 1;
    int a = n;

    for (int i = n - 1; i >= 1; --i) a = (a * i) % (int(1e9) + 7);
    return a;
}

int main() {
    int n, c;
    scanf("%d%d", &n, &c);
    printf("%d\n", fat(c) / fat(c - (n * 3)));

    return 0;
}
