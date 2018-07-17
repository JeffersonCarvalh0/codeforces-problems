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

    Graph(int v) { adj_list.resize(v); children_qtd.resize(v, 0); }
    void addEdge(int orig, int dest) { adj_list[orig].insert(dest); ++children_qtd[orig]; }

    list<int> dfs() {
        list<int> visits; adj_list[0].erase(0);
        dfs_helper(visits, 0);
        return visits;
    }

    void dfs_helper(list<int> &visits, int v) {
        cout << " v: " << v << '\n';
        visits.push_back(v);
        for (auto &child : adj_list[v]) dfs_helper(visits, child);
    }
};

int main() {
    // ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, q, cur, u, k;
    map<int, int> indexes;

    cin >> n >> q;
    Graph g(n);
    for (int i = 0; i < n; ++i) cin >> cur, g.addEdge(cur - 1, i);

    auto visits_list = g.dfs();
    vector<int> visits(visits_list.size());
    int c = 0;
    for (auto &vertex : visits_list) visits[c++] = vertex;

    for (int i = 0; i < n; ++i) cout << visits[i] << ' ';
    cout << '\n';
    for (int i = 0; i < n; ++i) indexes[visits[i]] = i;

    for (int i = 0; i < q; ++i) {
        cin >> u >> k; --u; --k;
        int l = indexes[q], r = l + k;
        if (r - l > g.children_qtd[q]) cout << -1 << '\n';
        else cout << visits[l + k - 1] + 1 << '\n';
    }

    return 0;
}
