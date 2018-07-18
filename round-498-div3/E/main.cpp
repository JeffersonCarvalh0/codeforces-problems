# include <iostream>
# include <vector>
# include <set>
# include <map>
# include <list>

using namespace std;

class Graph {
public:
    vector<set<int>> adj_list;
    vector<int> children_qtd;

    Graph(int v) { adj_list.resize(v); children_qtd = vector<int>(v, 0); }
    void addEdge(int orig, int dest) { adj_list[orig].insert(dest); ++children_qtd[orig]; }

    vector<int> dfs() {
        vector<int> visits;
        dfs_helper(visits, 0, 0);
        return visits;
    }

    void dfs_helper(vector<int> &visits, int v, int p) {
        visits.push_back(v);
        for (auto &child : adj_list[v]) dfs_helper(visits, child, v);
        if (p != v) children_qtd[p] += children_qtd[v];
    }
};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, q, cur, u, k;
    map<int, int> indexes;

    cin >> n >> q;
    Graph g(n);
    for (int i = 1; i < n; ++i) cin >> cur, g.addEdge(cur - 1, i);

    auto visits = g.dfs();
    for (int i = 0; i < n; ++i) indexes[visits[i]] = i;

    for (int i = 0; i < q; ++i) {
        cin >> u >> k; --u; --k;
        int l = indexes[u], r = l + k;
        if (r - l > g.children_qtd[u]) cout << -1 << '\n';
        else cout << visits[l + k] + 1 << '\n';
    }

    return 0;
}
