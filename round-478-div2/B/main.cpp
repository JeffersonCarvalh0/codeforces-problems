# include <iostream>
# include <cmath>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll holes[14], result[14], max = 0, sum;

    for (int i = 0; i < 14; ++i) { cin >> holes[i]; result[i] = holes[i]; }

    for (int i = 0; i < 14; ++i) {
        for (int j = 0; j < 14; ++j) result[j] = holes[j];
        result[i] = 0;

        if (holes[i] < 14) {
            for (int j = (i + 1) % 14, k = 0; k < holes[i]; ++k, j = (j+1)%14) ++result[j];
        }

        else {
            for (int j = 0; j < 14; ++j) result[j] += (holes[i] / 14);
            for (int j = i + 1, k = 0; k < (holes[i] % 14); ++k, j = ((j+1)%14)) ++result[j];
        }

        // for (int j = 0; j < 14; ++j) cout << result[j] << ' ';
        // cout << '\n';
        sum = 0;
        for (int j = 0; j < 14; ++j) if (!(result[j] & 1)) sum += result[j];
        if (sum > max) max = sum;
    }

    cout << max << '\n';
    return 0;
}
