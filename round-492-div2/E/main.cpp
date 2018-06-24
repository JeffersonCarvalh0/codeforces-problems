// Wrong answer
# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, x, y, cur_x = 0, cur_y = 0, pos, neg;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        pos = ((x + cur_x) * (x + cur_x)) + ((y + cur_y) * (y + cur_y));
        neg = ( ((x * -1) + cur_x) * ((x * -1) + cur_x)) + (((y * -1) + cur_y) * ((y * -1) + cur_y) );

        if (pos < neg) { cur_x += x; cur_y += y; cout << "1 "; }
        else { cur_x += (x * -1); cur_y += (y * -1); cout << "-1 "; }
    }

    cout << '\n';

    return 0;
}
