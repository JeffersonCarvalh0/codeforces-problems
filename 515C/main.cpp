# include <iostream>
# include <string>
# include <set>

using namespace std;

int main() {
    int n;
    string a;
    multiset<int> ans;

    cin >> n >> a;
    for (auto &ch : a) {
        if (ch == '0' || ch == '1') continue;
        if (ch == '4') { ans.insert(3); ans.insert(2); ans.insert(2); }
        else if (ch == '6') { ans.insert(5); ans.insert(3); }
        else if (ch == '8') { ans.insert(7); ans.insert(2); ans.insert(2); ans.insert(2); }
        else if (ch == '9') { ans.insert(7); ans.insert(3); ans.insert(3); ans.insert(2); }
        else ans.insert(ch - '0');
    }

    for (auto it = ans.rbegin(); it != ans.rend(); ++it) cout << *it;
    cout << '\n';

    return 0;
}
