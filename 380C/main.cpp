# include <iostream>
# include <vector>
# include <string>

using namespace std;

inline int min(int a, int b) { return a < b ? a : b; }

class Node {
public:
    int valid, left, right;

    Node(int valid = 0, int left = 0, int right = 0): valid(valid), left(left), right(right) {}

    void operator = (Node &rhs) { valid = rhs.valid; left = rhs.left; right = rhs.right; }

    Node operator + (Node &rhs) {
        Node node;
        int temp = min(left, rhs.right);
        return Node(valid + rhs.valid + (temp * 2), left + rhs.left - temp, right + rhs.right - temp);
    }

    void operator += (Node &rhs) { Node node = *this + rhs; *this = node; }
};

class SegTree {
public:
    int n;
    vector<Node> tree;

    SegTree(string &s, int n) {
        tree = vector<Node>(n * 2, Node());
        for (int i = 0; i < n; ++i) s[i] == '(' ? tree[i+n].left = 1 : tree[i+n].right = 1;
        for (int i = n - 1; i > 0; --i) {
            Node node = tree[i<<1] + tree[i<<1|1]; tree[i] = node;
        }
    }

    int query(int l, int r) {
        Node node;
        for (l += n, r += n; l <= r; l >>= 1, r >>= 1) {
            if (l & 1) node += tree[l++];
            if (!(r & 1)) node += tree[r--];
        }
        return node.valid;
    }
};

int main() {
    // ios_base::sync_with_stdio(0); cin.tie(0);

    string s;
    int m, l, r;

    cin >> s >> m;
    SegTree tree = SegTree(s, s.size());

    for (int i = 1; i < s.size() * 2; ++i) {
        cout << "i = " << i << '\n';
        cout << tree.tree[i].valid << ' ' << tree.tree[i].valid << ' ' << tree.tree[i].right << "\n\n";
    }

    while (m--) {
        cin >> l >> r;
        // cout << l << ' ' << r << '\n';
        cout << tree.query(--l, --r) << '\n';
    }
}
