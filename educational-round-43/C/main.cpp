// Sent after the contest was finished - TLE
# include <iostream>
# include <set>
# include <iterator>

using namespace std;

struct segment {
    int l, r, i;
    segment(int l, int r, int i): l(l), r(r), i(i) {};
};

struct segment_comp {
    bool operator () (const segment &lhs, const segment &rhs) {
        return lhs.l <= rhs.l ? true : false;
    }
};

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    multiset<segment, segment_comp> a;
    int n, l, r;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> l >> r;
        a.insert(segment(l, r, i + 1));
    }

    for (auto it1 = a.begin(); it1 != a.end(); ++it1) {
        for(auto it2 = next(it1); it2 != a.end(); ++it2) {
            if (it2->r <= it1->r) {
                cout << it2->i << ' ' << it1->i << '\n';
                return 0;
            }
            if (it1->l >= it2->l && it1->r <= it2->r) {
                cout << it1->i << ' ' << it2->i << '\n';
                return 0;
            }
        }
    }

    cout << "-1 -1\n";

    return 0;
}
