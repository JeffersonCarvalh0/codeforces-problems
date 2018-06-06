# include <iostream>
# include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    set<int> diff_colors;
    int cur;

    for (int i = 0; i < 5; ++i) { cin >> cur; diff_colors.insert(cur); }
    cout << 4 - diff_colors.size() << '\n';

    return 0;
}
