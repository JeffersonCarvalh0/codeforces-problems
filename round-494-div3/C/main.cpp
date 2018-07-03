# include <iostream>
# include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.setf(ios::fixed);
    int n, k, a[5005], sum = 0;
    double cur_seg, max_avg = 0;

    cin >> n >> k;
    for (int i = 0; i < n; ++i) cin >> a[i];

    cur_seg = k;
    int l = 0, r = k;

    while (cur_seg <= n) {
        for (int i = l; i < r; ++i) sum += a[i];
        while (r <= n) {
            max_avg = max(sum / cur_seg, max_avg);
            sum -= a[l];
            if (r < n) sum += a[r];
            ++l, ++r;
        }
        ++cur_seg; l = 0; r = cur_seg; sum = 0;
    }

    cout << setprecision(15) << max_avg << '\n';
    return 0;
}
