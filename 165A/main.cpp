# include <iostream>
# include <list>

struct Coord { int x, y; };

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, x, y, count = 0;
    bool up, down, left, right;
    list<Coord> coords;

    cin >> n;
    while(n--) {
        cin >> x >> y;
        Coord c; c.x = x; c.y = y;
        coords.push_back(c);
    }

    for (auto it1 = coords.begin(); it1 != coords.end(); ++it1) {
        up = down = left = right = false;
        for (auto it2 = coords.begin(); it2 != coords.end(); ++it2) {
            if (it2->x == it1->x) { if (!up) up = (it2->y > it1->y); if(!down) down = (it2->y < it1->y); }
            if (it2->y == it1->y) { if (!left) left = (it2->x < it1->x); if (!right) right = (it2->x > it1->x); }
        }
        count += (up && down && left && right);
    }

    cout << count << '\n';

    return 0;
}
