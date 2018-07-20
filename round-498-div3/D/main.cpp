# include <iostream>
# include <map>
# include <string>

using namespace std;

inline int cnt(char a1, char a2, char b1, char b2) {
    map<char, int> qtds;
    ++qtds[a1]; ++qtds[a2]; ++qtds[b1]; ++qtds[b2];

    if (qtds.size() == 1) return 0;
    if (qtds.size() == 2) {
        for (auto &qtd : qtds) if (qtd.second == 3) return 1;
        return 0;
    }

    if (qtds.size() == 3) {
        for (auto &qtd : qtds)
            if (qtd.second == 2 && ((qtd.first == a1) ^ (qtd.first == a2))) return 1;
        return 2;
    }
    else return 2;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, moves = 0;
    string a, b;

    cin >> n >> a >> b;

    for (int i = 0; i < n/2; ++i) moves += cnt(a[i], a[n-i-1], b[i], b[n-i-1]);
    if (n & 1) moves += (a[n/2] != b[n/2]);

    cout << moves << '\n';

    return 0;
}
