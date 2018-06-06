# include <iostream>
# include <set>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;
    multiset<int> ans;

    cin >> s;
    for (auto &ch : s) if (ch != '+') ans.insert(ch - '0');
    for (auto it = ans.begin(); it != ans.end(); ++it) { cout << *it; if (it != prev(ans.end())) cout << '+'; }
    cout << '\n';

    return 0;
}
