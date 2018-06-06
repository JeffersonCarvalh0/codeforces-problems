# include <iostream>
# include <set>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;
    set<char> distinct;

    cin >> s;
    for (auto &ch : s) distinct.insert(ch);

    if (distinct.size() & 1) cout << "IGNORE HIM!\n";
    else cout << "CHAT WITH HER!\n";

    return 0;
}
