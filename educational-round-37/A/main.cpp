# include <iostream>
# include <cstring> // memset

using namespace std;

int main() {
    int t, n, k, seconds, tapesInt[200], curTape;
    bool beds[200],     // Where true, the bed was watered
         tapesBool[200],    // Where true, there is a tape
         done;          // True when everyting got watered

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> n >> k;

        memset(beds, false, n);
        memset(tapesBool, false, n);
        for (int j = 0; j < k; ++j) {
            cin >> curTape;
            tapesInt[j] = curTape - 1;
            tapesBool[curTape - 1] = true;
        }

        for (int j = 0; j < k; ++j)
            beds[tapesInt[j]] = true; // Waters where are tapes

        done = false;
        seconds = 1;
        while(!done) {
            done = true;
            for (int j = 0; j < n; ++j) {
                if (!beds[j]) { // If this bed was not watered
                    done = false;
                    break;
                }
            }
            
            for (int j = 0; j < n; ++j) {
                if (tapesBool[j]) { // If there is a tape
                    if (j - seconds >= 0)
                        beds[j - seconds] = true;
                    if (j + seconds <= n)
                        beds[j + seconds] = true;
                }
            }

            if (!done)
                ++seconds;
        }
        cout << seconds << '\n';
    }
}
