// Not finished yet
# include <iostream>
# include <set>
# include <string>

using namespace std;

struct compare {
    bool operator () (const string &lhs, const string &rhs) {
        return lhs.size() < rhs.size();
    }
};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, count = 0, cur_count, word_count;
    multiset<string, compare> a, b;
    string cur;

    cin >> n;
    for (int i = 0; i < n; ++i) { cin >> cur; a.insert(cur); }
    for (int i = 0; i < n; ++i) { cin >> cur; b.insert(cur); }

    auto to_erase = a.begin();
    for (auto it1 = a.begin(); it1 != a.end(); ++it1) {
        word_count = 1e9;
        for (auto it2 = b.begin(); it2 != b.end(); ++it2) {
            cur_count = 0;
            if (it1->size() == it2->size()) {
                for (int i = 0; i < it1->size(); ++i) {
                    if (it1->at(i) != it2->at(i)) ++cur_count;
                }
                if (cur_count < word_count) {
                    word_count = min(word_count, cur_count);
                    to_erase = it2;
                }
            }
        }
        count += word_count;
        a.erase(it1);
        b.erase(it2);
    }

    cout << count << '\n';

    return 0;
}
