// Not done yet

# include <iostream>
# include <vector>
# include <list>
# include <stack>

using namespace std;

class Graph {
public:
    int v;
    vector<list<int>> adj_list;
    vector<int> degree;

    Graph(int v): v(v) { adj_list = vector<list<int>>(v); degree = vector<int>(v, 0); }
    void addEdge(int v1, int v2) { adj_list[v1].push_back(v2); adj_list[v2].push_back(v1); ++degree[v1]; ++degree[v2]; }

    int cycles() {
        vector<bool> visited(v, false);
        bool cycle = true;
        int counter = 0;
        for (int i = 0; i < v; ++i) {
            if(!visited[i]) {
                dfs(i, visited, cycle);
                if (cycle) ++counter;
                cycle = true;
            }
        }
        return counter;
    }

    void dfs(int node, vector<bool> &visited, bool &cycle) {
        visited[node] = true;
        if (degree[node] != 2) cycle = false;
        for (auto &vertex : adj_list[node]) {
            if (!visited[vertex]) dfs(vertex, visited, cycle);
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
