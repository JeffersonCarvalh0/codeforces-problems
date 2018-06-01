// W T F
# include <iostream>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int cur_min, min_total;
    string n;
    bool found = true;

    cin >> n;
    for (int i = n.size() - 1; i >= 0; --i) {
        cur_min = 0;
        if (n[i] == '0') {
            cur_min += n.size() - i;
            for (int j = n.size() - 2; j >= 0; --j) {
                if (n[j] == '5') {
                    cur_min += n.size() - 1 - i + (j > i);
                    if ((i == 0 || j == 0) && n[0] == '0') {
                        for (int k = 0; k < n.size(); ++k) {
                            if (n[k] != '0') { cur_min += k + (i == 0) + (j == 0); found = false; }
                        }
                    }
                } else found = false;
            } else found = false;
        } else found = false;
    }

    min_total =

    return 0;
}
