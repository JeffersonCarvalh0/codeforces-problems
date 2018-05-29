// Terrible solution. Don't even try it.

# include <iostream>
# include <set>
# include <string>

using namespace std;

int digitsSum(string &str) {
    int sum = 0;
    for (auto ch = str.rbegin(); ch != str.rend(); ++ch) { sum += *ch - '0'; }
    return sum;
}

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int m, s;
    string cur, end;
    set<string> chosen;

    cin >> m >> s;

    cur = string(m, '0');
    cur[0] = '1';
    end = string(m, '9');

    while (cur != end) {
        if (digitsSum(cur) == s) chosen.insert(cur);
        int i = 1;
        if (cur[cur.size() - 1] == '9')
            for (i = 1; cur[cur.size() - i] == '9'; ++i) cur[cur.size() - i] = '0';
        ++cur[cur.size() - i];
    }

    if (chosen.size()) cout << *chosen.begin() << ' ' << *chosen.rbegin() << '\n';
    else cout << "-1 -1\n";

    return 0;
}
