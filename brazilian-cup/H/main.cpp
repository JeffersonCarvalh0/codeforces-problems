// Not working

# include <iostream>
# include <vector>
# include <list>
# include <algorithm>

using namespace std;

struct Edge {
    int dest, weight;
    Edge(int dest, int weight): dest(dest), weight(weight) {};
};

class Graph {
public:
    int v;
    vector<list<Edge>> adj_list;

    Graph(int v): v(v) { adj_list.resize(v); }
    void addEdge(int v1, int v2, int weight) { adj_list[v1].push_back(Edge(v2, weight)); }

    vector<pair<int, int>> dijkstra() {
        vector<bool> visited(v, false);
        vector<int> costs(v, 1e4);
        vector<int> connections(v, 0);
        vector<pair<int, int>> ans(v);

        costs[0] = 0;
        connections[0] = -1;
        for (int i = 0; i < v - 1; ++i) {
            int cur, min = 1e4;
            for (int j = 0; j < v; ++j) if (costs[j] < min && !visited[j]) { cur = j; min = costs[j]; }
            cout << cur << '\n';
            for (auto &edge : adj_list[cur]) {
                if (edge.weight + costs[cur] < costs[edge.dest]) {
                    costs[edge.dest] = edge.weight + costs[cur];
                    connections[edge.dest] = connections[cur] + 1;
                }
            }
            visited[cur] = true;
        }
        for (int i = 0; i < v; ++i) cout << costs[i] << ' ';
        cout << '\n';
        for (int i = 0; i < v; ++i) cout << connections[i] << ' ';
        cout << '\n';

        for (int i = 0; i < v; ++i) ans[i] = make_pair(costs[i], connections[i]);
        return ans;
    }

    // vector<pair<int, int>> bfs() {
    //
    // }
};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m, a, b, c, q, d, k;

    cin >> n >> m;
    Graph g(n);

    while (m--) { cin >> a >> b >> c; g.addEdge(--a, --b, c); }
    auto minimumCost = g.dijkstra();
    // auto minimumConnections = g.bfs();

    cin >> q;
    while (q--) {
        cin >> d >> k;
        if (minmumCost[--d].second <= k) cout << "=] " << minimumCost[d].first << '\n'; else cout << "=[\n";
    }

    return 0;
}
