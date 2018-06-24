# include <iostream>
# include <vector>

using namespace std;

inline int organize(vector<int> &a, int i) {
    int j;
    for (j = i + 1; j < a.size(); ++j) {
        if (a[j] == a[i]) {
            int temp = a[j];
            a.erase(a.begin() + j);
            a.insert(a.begin() + i + 1, temp);
            break;
        }
    }

    return j - (i + 1);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, count = 0;

    cin >> n; n <<= 1;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) cin >> a[i];

    for (int i = 0; i < n; i += 2) if (a[i] != a[i + 1]) count += organize(a, i);

    cout << count << '\n';

    return 0;
}
