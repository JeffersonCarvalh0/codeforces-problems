# include <iostream>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, inc = 0, dec = 0;
    string s;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if(s.find("++") != string::npos) ++inc;
        else if (s.find("--") != string::npos) ++dec;
    }

    cout << inc - dec << '\n';

    return 0;
}
