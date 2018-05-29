# include <cstdio>

int main() {
    int n, x, y, z, t_x = 0, t_y = 0, t_z = 0;

    scanf("%d", &n);
    while (n--) {
        scanf("%d%d%d", &x, &y, &z);
        t_x += x; t_y += y; t_z += z;
    }

    if (!t_x && !t_y && !t_z) printf("YES\n");
    else printf("NO\n");

    return 0;
}
