// Not done yet

# include <iostream>
# include <vector>
# include <list>

using namespace std;

class Graph {
public:
    int v;
    vector<list<int>> adj_list;

    Graph(int v): v(v) { adj_list = vector<list<int>>(v); }
    void addEdge(int v1, int v2) { adj_list[v1].push_back(v2); adj_list[v2].push_back(v1); }

    int cycles() {
        vector<bool> visited(v, false);
        int counter = 0;
        for (int i = 0; i < v; ++i) if(!visited[i]) dfs(i, visited, counter, i);
        return counter;
    }

    void dfs(int node, vector<bool> &visited, int &counter, int last) {
        visited[node] = true;
        for (auto &vertex : adj_list[node]) {
            cout << "Current node: " << node + 1 << " Looking into: " << vertex + 1;
            if (!visited[vertex]) { cout << " Not visited yet.\n";  dfs(vertex, visited, counter, node); }
            else if (vertex != last) { cout << " Has been visited, forms a cycle.\n"; ++counter; }
            else cout << '\n';
        }
    }
};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m, v1, v2;
    cin >> n >> m;
    Graph g(n);
    while (m--) {
        cin >> v1 >> v2;
        g.addEdge(--v1, --v2);
    }

    cout << g.cycles() << '\n';

    return 0;
}
