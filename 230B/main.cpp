// The exact same code shows onde answer here, and another in the codeforces systems.
// The exact same code, exact same input. Their outputs are different.

# include <iostream>
# include <vector>
# include <cmath>
# include <unordered_set>

typedef long long ll;

using namespace std;

vector<bool> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = false; is_prime[1] = false;

    for (int i = 2; i <= n; ++i) {
        if (!is_prime[i]) continue;
        for (int j = i + i; j <= n; j += i) {
            is_prime[j] = false;
        }
    }
    return is_prime;
}

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    ll x;
    vector<bool> primes = sieve(1e6);
    unordered_set<ll> answers;

    for (size_t i = 2; i < primes.size(); ++i) if (primes[i]) answers.insert(i*i);

    cin >> n;
    while (n--) {
        cin >> x;
        answers.find(x) != answers.end() ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}
