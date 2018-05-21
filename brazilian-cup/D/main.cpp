# include <cstdio>

using namespace std;

class SegTree {
public:
    int n;
    float *tree;

    SegTree(int n, float *arr): n(n) {
        tree = new float[n * 2];
        for (int i = 0; i < n; ++i) tree[i + n] = arr[i];
        for (int i = n - 1; i > 0; --i) tree[i] = tree[i<<1] + tree[i<<1|1];
    }

    float query(int l, int r) {
        int divisor = r - l + 1;
        float mean = 0.0;
        for (l += n, r += n; l <= r; l >>= 1, r >>= 1) {
            if (l & 1) mean += tree[l++];
            if (!(r & 1)) mean += tree[r--];
        }
        return mean / divisor;
    }

    void update(int p, float value) {
        for (tree[p += n] = value; p > 1; p >>= 1) tree[p>>1] = tree[p] + tree[p^1];
    }
};

int main() {
    int n, q, t, l, r;
    float a[100000], value;

    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%f", &a[i]);
    SegTree tree = SegTree(n, a);
    scanf("%d", &q);
    while (q--) {
        scanf("%d", &t);
        if (t == 1) { scanf("%d%f", &l, &value); tree.update(--l, value); }
        if (t == 2) { scanf("%d%d", &l, &r); printf("%.6f\n", tree.query(--l, --r)); }
    }

    return 0;
}
