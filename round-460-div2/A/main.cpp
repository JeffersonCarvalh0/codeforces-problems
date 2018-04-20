# include <iostream>
# include <cstdio>
# include <set>

using namespace std;

int main() {

    int n, m;
    double a, b;
    set<double> ans;

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        ans.insert((a/b) * m);
    }

    printf("%.8lf\n", *ans.begin());

    return 0;
}
