# include <iostream>
# include <set>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    string word, root;
    bool chars[26];
    set<string> objects;

    cin >> n;

    while (n--) {
        for (int i = 0; i < 26; ++i) chars[i] = false;
        root = "";
        cin >> word;

        for (auto &ch : word) if (!chars[ch - 'a']) chars[ch - 'a'] = true;
        for (int i = 0; i < 26; ++i) if (chars[i]) root += char('a' + i);
        objects.insert(root);
    }

    cout << objects.size() << '\n';
    return 0;
}
