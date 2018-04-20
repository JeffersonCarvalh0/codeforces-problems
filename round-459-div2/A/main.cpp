# include <iostream>

using namespace std;

inline int* fib(int n) {
    ++n;
    auto fibonacci = new int[n];

    if (n >= 1)
        fibonacci[0] = 1;
    if (n >= 2)
        fibonacci[1] = 1;

    for (int i = 2; i < n; ++i)
        fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];

    return fibonacci;
}

int main() {

    int n, *fibonacci;

    cin >> n;
    fibonacci = fib(n);

    // i = iterator for fib, j = iterator for n
    for (int i = 1, j = 1; j <= n; ++j) {
        if (j == fibonacci[i]) {
            cout << 'O';
            ++i;
        } else {
            cout << 'o';
        }
    }

    cout << endl;

    return 0;
}
