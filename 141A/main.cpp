# include <iostream>
# include <string>
# include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s1, s2, s3;

    cin >> s1 >> s2 >> s3;
    string concat = s1 + s2;
    sort(concat.begin(), concat.end());
    sort(s3.begin(), s3.end());

    if (concat == s3) cout << "YES\n"; else cout << "NO\n";

    return 0;
}
