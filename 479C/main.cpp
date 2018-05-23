# include <cstdio>
# include <vector>
# include <algorithm>
# include <utility>

using namespace std;

int main() {
    int n, a, b;

    scanf("%d", &n);
    vector<pair<int, int>> vec(n);
    for (int i = 0; i < n; ++i) { scanf("%d%d", &a, &b); vec[i] = make_pair(a, b); }
    sort(vec.begin(), vec.end());

    int day = vec[0].first < vec[0].second ? vec[0].first : vec[0].second;
    for (auto &p : vec) day = p.second >= day ? p.second : p.first;

    printf("%d\n", day);

    return 0;
}
