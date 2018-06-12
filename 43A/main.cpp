# include <iostream>
# include <map>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, max_score = 0;
    string team;
    map<string, int> score;
    string winner;

    cin >> n;
    while(n--) {
        cin >> team;
        if (score.find(team) == score.end()) score[team] = 1;
        else ++score[team];
    }

    for (auto &e : score) {
        if (e.second > max_score) { max_score = e.second; winner = e.first; }
    }

    cout << winner << '\n';

    return 0;
}
