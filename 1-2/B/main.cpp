// WA

# include <iostream>
# include <string>
# include <stack>
# include <cmath>

using namespace std;

inline string toFirst(string s) {
    int i;
    for (i = 0; i < s.size(); ++i) if (s[i] >= '0' && s[i] <= '9') break;
    string col = s.substr(0, i);
    string row = s.substr(i, s.size() - i);

    int a = 0;
    for (int i = col.size() - 1, j = 0; j < col.size(); --i, ++j) a += (int(col[j] - 'A') + 1) * pow(26, i);
    return "R" + row + "C" + to_string(a);
}

inline string toSecond(string s) {
    int i;
    string col, row;
    for (i = 1; i < s.size(); ++i) { if (s[i] == 'C') { row = s.substr(1, i - 1); break; } }
    col = s.substr(i + 1, s.size() - (i + 1));

    int temp = stoi(col);
    stack<int> st;
    while (true) {
        st.push(char(temp % 26) + '@');
        temp /= 26;
        if (temp == 1) { st.push(char(temp) + '@'); break; }
        else if (temp == 0) break;
    }

    col = "";
    while (!st.empty()) { col += st.top(); st.pop(); }

    return col + row;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    string s;
    bool flag = false;

    cin >> n;
    while(n--) {
        cin >> s; flag = false;
        for (auto &ch : s) {
            if (ch >= '0' && ch <= '9') flag = true;
            if (ch >= 'A' && ch <= 'Z' && flag) { flag = false; break; }
        }

        // 1st system: R23C55
        // 2nd system: BC23

        if (flag) cout << toFirst(s) << '\n';
        else cout << toSecond(s) << '\n';
    }

    return 0;
}
