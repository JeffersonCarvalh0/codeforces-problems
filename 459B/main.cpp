# include <iostream>
# include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, cur;
    long long p, qtd_min, qtd_max;
    multiset<int> b;

    cin >> n;
    for (int i = 0; i < n; ++i) { cin >> cur; b.insert(cur); }

    qtd_min = b.count(*b.begin()); qtd_max = b.count(*b.rbegin());

    if (*b.begin() == *b.rbegin()) p = qtd_min * (qtd_min - 1) / 2;
    else p = qtd_min * qtd_max;

    cout << *b.rbegin() - *b.begin() << ' ' << p << '\n';

    return 0;
}
