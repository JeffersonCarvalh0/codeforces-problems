# include <iostream>
# include <vector>
# include <list>
# include <queue>

using namespace std;

class Graph {
public:
    int v;
    vector<list<int>> adj_list;
    vector<int> parents;

    Graph(int v): v(v) {
        adj_list.resize(v);
        parents.resize(v);
        parents[0] = 0;
    }

    void addEdge(int orig, int dest) {
        adj_list[orig].push_back(dest);
        adj_list[dest].push_back(orig);
    }

    int bfs(int m, bool *a) {
        vector<int> consec(v, 0);
        queue<int> q;
        int count = 0;
        parents[0] = 0;
        q.push(0);

        while (!q.empty()) {
            int cur = q.front(); q.pop();
            consec[cur] = a[cur] ? consec[parents[cur]] + 1 : 0;
            if (consec[cur] <= m) {
                for (auto &e : adj_list[cur])
                    if (parents[cur] != e) q.push(e), parents[e] = cur;
                if (adj_list[cur].size() == 1 && cur != 0) ++count;
            }
        }
        return count;
    }
};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, orig, dest;
    bool a[100005];

    cin >> n >> m;
    Graph g(n);

    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n - 1; ++i) {
        cin >> orig >> dest;
        g.addEdge(--orig, --dest);
    }

    cout << g.bfs(m, a) << '\n';

    return 0;
}
