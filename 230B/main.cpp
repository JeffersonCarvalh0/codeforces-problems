// TLE

# include <iostream>
# include <vector>
# include <cmath>

typedef long long ll;

using namespace std;

vector<bool> sieve(ll n) {
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

bool t_prime(ll n, vector<bool> &primes) {
    int divisors = 1, cur = 0, root = sqrt(n);

    for (int i = 2; i <= root && divisors <= 3;) {
        if ((n % i) == 0) { ++cur; n /= i; }
        else { divisors *= cur + 1; cur = 0; ++i; }
    }
    return divisors == 3;
}

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    ll n, x;
    vector<bool> primes = sieve(1e6);

    cin >> n;
    while (n--) {
        cin >> x;
        t_prime(x, primes) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}
