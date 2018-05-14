# include <iostream>
# include <string>

using namespace std;

int main() {
    int n, consecutive_x_counter = 0, to_remove = 0;
    string s;

    cin >> n >> s;
    for (auto &ch : s) {
        if (ch == 'x') ++consecutive_x_counter;
        else consecutive_x_counter = 0;
        if (consecutive_x_counter >= 3) ++to_remove;
    }
    cout << to_remove << '\n';
}
