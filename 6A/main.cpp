# include <iostream>
# include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int sticks[4];

    cin >> sticks[0] >> sticks[1] >> sticks[2] >> sticks[3];
    sort(sticks, sticks + 4);

    if (sticks[0] + sticks[1] > sticks[2] || sticks[1] + sticks[2] > sticks[3])
        cout << "TRIANGLE\n";
    else if (sticks[0] + sticks[1] == sticks[2] || sticks[1] + sticks[2] == sticks[3])
        cout << "SEGMENT\n";
    else cout << "IMPOSSIBLE\n";

    return 0;
}
