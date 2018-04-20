# include <iostream>
# include <string>

using namespace std;

int main() {

    int n, prev, cur, sum;

    cin >> n;

    prev = 19;
    for (int i = 1; i < n; ++i) {
        cur = ++prev;
        sum = 0;

        while (cur > 0) {
            sum += cur % 10;
            cur /= 10;
        }

        if (sum != 10)
            --i;
    }

    cout << prev << endl;

    return 0;
}
