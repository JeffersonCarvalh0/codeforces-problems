# include <iostream>
# include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int k, n, s, p;
    cin >> k >> n >> s >> p;

    int sheetsPerPerson = ceil(float(n) / s);
    int totalSheets = sheetsPerPerson * k;
    int totalPackets = ceil(float(totalSheets) / p);

    cout << totalPackets << '\n';
    return 0;
}
