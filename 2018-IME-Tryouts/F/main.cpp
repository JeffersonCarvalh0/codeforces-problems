# include <iostream>
# include <vector>
# include <list>

using namespace std;

class DSU {
public:
    vector<int> parent;
    vector<int> size;

    DSU(int v) {
        parent.resize(v);
        for (int i = 0; i < v; ++i) parent[i] = i;
        size.resize(v, 1);
    }

    int find(int v) {
        if (v == parent[v]) return v;
        return parent[v] = find(parent[v]);
    }

    void merge(int a, int b) {
        a = find(a);
        b = find(b);

        if (a != b) {
            if (size[a] < size[b]) swap(a, b);
            parent[b] = a;
            size[a] += size[b];
        }
    }
};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, a, b, k;
    vector<int> destroyed, ans;
    vector<pair<int, int>> roads;

    cin >> n >> m;
    DSU dsu(n);
    roads.resize(m); destroyed.resize(m); ans.resize(m);

    for (int i = 0; i < m; ++i) cin >> a >> b, roads[i] = { --a, --b };
    for (int i = 0; i < m; ++i) cin >> destroyed[i], --destroyed[i];

    k = n;
    for (int i = m - 1; i >= 0; --i) {
        auto road = roads[destroyed[i]];
        ans[i] = k;

        a = dsu.find(road.first);
        b = dsu.find(road.second);

        if (a != b) --k;
        dsu.merge(road.first, road.second);
    }

    for (int i = 0; i < m; ++i) cout << ans[i] << '\n';

    return 0;
}
