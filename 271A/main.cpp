# include <iostream>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int y;
    string s;
    bool found[10], distinct;

    cin >> y;
    while (true) {
        for (int i = 0; i < 10; ++i) found[i] = 0;
        ++y;
        s = to_string(y);
        distinct = true;
        for (auto &ch : s) {
            if (!found[ch - '0']) found[ch - '0'] = 1;
            else { distinct = false; break; }
        }
        if (distinct) { cout << y << '\n'; break; }
    }
    return 0;
}
