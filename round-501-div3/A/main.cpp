# include <iostream>
# include <vector>

using namespace std;

struct Segment {
    int l, r;
    Segment(int l = 0, int r = 0): l(l), r(r) {}
};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, l, r, k = 0;
    vector<int> ans;

    cin >> n >> m;
    vector<Segment> segments(n);

    for (int i = 0; i < n; ++i) {
        cin >> l >> r;
        segments[i] = Segment(l, r);
    }

    bool belongs = false;
    for (int i = 1; i <= m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i >= segments[j].l && i <= segments[j].r) {
                belongs = true; break;
            }
        }

        if (!belongs) ++k, ans.push_back(i);
        belongs = false;
    }

    cout << k << '\n';
    for (int i = 0; i < k; ++i) cout << ans[i] << ' ';
    cout << '\n';

    return 0;
}
