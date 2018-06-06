# include <iostream>
# include <vector>
# include <list>
# include <queue>

using namespace std;

class Graph {
public:
    int v, e;

    vector<list<int>> adj_list;

    Graph(int v, safe_left, safe_right): v((v << 1) + 1), e(0) { adj_list.resize(v); }
    void addEdge(int orig, int dest) { adj_list[orig].push_back(dest); ++e; }

    int BFS() {
        vector<int> level(v, 100005);
        vector<bool> visited(v, false);
        queue<int> q;
        int water = 0;
        
        q.push(0);
        level[0] = 0;

        while (!q.empty()) {
            int cur = q.top(); q.pop;
            visited[cur] = true;

            for(auto &adj : adj_list[cur]) {
                if (!visited[adj]) q.push(adj);
                if (level[cur] + 1 < level[adj]) level[adj] = level[cur + 1];
            }
        }

        return level[v - 1];
    }
};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k;
    char ch;
    bool safe_left[100005], safe_right[100005];

    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> ch;
        if (ch == '-') safe_left[i] = true;
        else if (ch == 'X') safe_left[i] = false;
    }

    for (int i = 0; i < n; ++i) {
        cin >> ch;
        if (ch == '-') safe_right[i] = true;
        else if (ch == 'X') safe_right[i] = false;
    }

    Graph g(v);

    if (safe_left[n - 1]) g.addEdge(i, n << 1);
    if (safe_right[n - 1]) g.addEdge(i << 1, n << 1);

    for (int i = 0; i < n; ++i) {
        if (safe_left[i] && safe_left[i + 1]) {
            g.addEdge(i, i + 1); g.addEdge(i + 1, i);
        }

        if (safe_left[i] && i + k < n) g.addEdge(i, (i << 1) + k);
        else g.addEdge(i, n << 1);
    }

    for (int i = 0; i < n; ++i) {
        if (safe_right[i] && safe_right[i + 1]) {
            g.addEdge(i << 1, (i << 1) + 1); g.addEdge((i << 1) + 1, i);
        }

        if (safe_right[i] && i + k < n) g.addEdge(i << 1, i + k);
        else g.addEdge(i << 1, n << 1);
    }

    if (g.BFS() > n)

    return 0;
}
