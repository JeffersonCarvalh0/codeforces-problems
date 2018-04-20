# include <iostream>

using namespace std;

int main() {

    int N, X = 0, Y = 0, C = 0;
    bool cur_side, prev_side;
    char c;

    cin >> N;

    // Side 1: upper kingdom, side 2: lower kingdom

    cin >> c;
    cur_side = (c == 'U') ? 1 : 0;
    prev_side = cur_side;
    (c == 'R') ? ++X : ++Y;

    for (int i = 1; i < N; ++i) {
        cin >> c;
        (c == 'R') ? ++X : ++Y;

        if (X > Y)
            cur_side = 0;
        else if (Y > X)
            cur_side = 1;

        if (cur_side != prev_side) {
            ++C;
            prev_side = cur_side;
        }
    }

    cout << C << endl;

    return 0;
}
