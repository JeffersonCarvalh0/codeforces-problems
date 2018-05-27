# include <iostream>
# include <string>

using namespace std;

string max_not_palindrome(string s) {
    string reversed;
    for (int i = s.size() - 1; i >= 0; --i) reversed += s[i];
    if (s == reversed) {
        for (size_t i = 0; i < s.size(); ++i) {
            string temp = s; temp.erase(i, 1);
            return max_not_palindrome(temp);
        }
    }
    else return s;
    return "";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string s, reversed, temp;

    cin >> s;
    cout << max_not_palindrome(s).size() << '\n';
    return 0;
}
