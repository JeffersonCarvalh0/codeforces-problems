# include <iostream>
# include <string>
# include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    string s;

    cin >> n >> s;

    int idx = 1;
    for (auto it = s.begin(); it < s.end(); ++it, ++idx) {
        if (s.size() % idx == 0) reverse(s.begin(), next(it));
    }

    cout << s << '\n';

    return 0;
}
