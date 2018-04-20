# include <iostream>

using namespace std;

int main() {

    int N, L = 1, P = 0;

    cin >> N;

    while(L <= (N/2)) {
        if ((N - L) % L == 0)
            ++P;
        ++L;
    }

    cout << P << endl;

    return 0;
}
