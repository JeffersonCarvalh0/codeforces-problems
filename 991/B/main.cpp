# include <iostream>
# include <algorithm>

using namespace std;

inline float average(int *grades, int size) {
    float total = 0;
    for (int i = 0; i < size; ++i) total += grades[i];
    return total / size;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, grades[105], count = 0;

    cin >> n;
    for (int i = 0; i < n; ++i) cin >> grades[i];
    sort(grades, grades + n);

    for (int i = 0; i < n; ++i) {
        float avg = average(grades, n);
        if (!(avg < 4.5)) break;
        grades[i] = 5; ++count;
    }

    cout << count << '\n';

    return 0;
}
