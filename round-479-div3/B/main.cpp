# include <iostream>
# include <string>
# include <map>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    string s, sub;
    map<string, int> digrams;

    cin >> n >> s;

    for (int i = 0; i < s.size() - 1; ++i) {
        sub = s.substr(i, 2);
        if (digrams.find(sub) != digrams.end()) ++digrams[sub];
        else digrams.insert(make_pair(sub, 1));
    }

    auto ans = digrams.begin();
    for (auto it = digrams.begin(); it != digrams.end(); ++it) {
        if (it->second > ans->second) ans = it;
    }

    cout << ans->first << '\n';

    return 0;
}
