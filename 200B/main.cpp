# include <iostream>
# include <cstdio>

using namespace std;

int main() {

    int n, v;
    double a = 0;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> v;
        a += 1/(100.0/v);
    }

    printf("%.12lf\n", (a/n) * 100);

    return 0;
}
