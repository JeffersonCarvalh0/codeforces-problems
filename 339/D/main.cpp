# include <iostream>
# include <vector>
# include <cmath>

using namespace std;

class Node {
public:
    int value; bool op; // true -> OR, false -> XOR
    Node(int value = 0, bool op = true) : value(value), op(op) {}
};

class SegTree {
public:
    vector<Node> tree; int n;
    SegTree(int *arr, int n) : n(n) {
        tree = vector<Node>(n * 2, Node());
        for (int i = 0; i < n; ++i) tree[i + n].value = arr[i];
        for (int i = n - 1; i > 0; --i) {
            if (tree[i<<1].op) tree[i].value = tree[i<<1].value | tree[i<<1|1].value;
            else tree[i].value = tree[i<<1].value ^ tree[i<<1|1].value;
            tree[i].op = !tree[i<<1].op;
        }
    }

    void modify(int p, int value) {
        for (tree[p += n].value = value; p > 1; p >>= 1) {
            if (tree[p].op) tree[p>>1].value = tree[p].value | tree[p^1].value;
            else tree[p>>1].value = tree[p].value ^ tree[p^1].value;
        }
    }
};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m, *a, p, b;

    cin >> n >> m; n = pow(2, n);
    a = new int[n];
    for (int i = 0; i < n; ++i) cin >> a[i];

    SegTree tree = SegTree(a, n);

    while (m--) {
        cin >> p >> b;
        tree.modify(--p, b);
        cout << tree.tree[1].value << '\n';
    }
    return 0;
}
