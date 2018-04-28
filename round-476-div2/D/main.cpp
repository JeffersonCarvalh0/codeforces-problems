// Wrong
# include <iostream>
# include <list>

using namespace std;

void compose(int i, int l, int w, int *a, list<int> &lis) {
    lis.push_back(i);
    if (i + 1 + l >= w) return;

    size_t curSize = lis.size();
    for (int j = i + l; j > i; --j) {
        if (j + 1 + l >= w) { lis.push_back(j); break;}
        if (a[j] > 0) compose(j, l, w, a, lis);
    }
    if (lis.size() == curSize) lis.pop_back();
}

inline int minimum(list<int> &lis, int *a) {
    int min = a[lis.front()];
    for (auto &num : lis) if (a[num] < min) min = a[num];
    return min;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int l, w, frogs = 0, *a;
    list<int> lis;

    cin >> w >> l;
    a = new int[w - 1];
    for(int i = 0; i < w - 1; ++i) cin >> a[i];

    for (int i = l - 1; i >= 0; --i) {
        if (a[i] > 0) compose(i, l, w, a, lis);
        if (lis.size() > 0) {
            int min = minimum(lis, a);
            for (auto &index : lis) a[index] -= min;
            frogs += min;
        }
        for (auto &index : lis) cout << index << ' ';
        cout << '\n';
        lis.clear();
    }

    // cout << frogs << '\n';
    return 0;
}
