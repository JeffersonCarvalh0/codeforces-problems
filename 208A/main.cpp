# include <iostream>
# include <string>

using namespace std;

int main() {
    // ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;
    int size;

    cin >> s;

    if (s.size() < 2) { cout << s << '\n'; return 0; }

    size = s.size();
    for (int i = 0; i < size - 2; ++i) {
        string sub = s.substr(i, 3);
        if (sub.compare("WUB") == 0 && i > 0 && s[i - 1] != ' ') s.replace(i, 3, " ");
        else if (sub.compare("WUB") == 0) { s.erase(i, 3); --i; }
        size = s.size();
    }

    for (int i = s.size() - 1; i >= 0; --i) {
        if (s[i] == ' ') s.erase(i, 1);
        if (s[i] != ' ') break;
    }

    cout << s << '\n';

    return 0;
}
