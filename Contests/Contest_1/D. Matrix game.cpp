#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

typedef long long ll;

const int MOD = 1e9 + 7;
const int MAX_VAL = 100005;

ll fact[MAX_VAL];
ll invFact[MAX_VAL];

// Function for modular exponentiation
ll power(ll base, ll exp) {
    ll res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

// Function to calculate modular inverse
ll modInverse(ll n) {
    return power(n, MOD - 2);
}

// Precompute factorials and their modular inverses
void precompute_factorials() {
    fact[0] = 1;
    for (int i = 1; i < MAX_VAL; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    invFact[MAX_VAL - 1] = modInverse(fact[MAX_VAL - 1]);
    for (int i = MAX_VAL - 2; i >= 0; i--) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }
}

// Function to compute nCr mod p where n can be large and r is small
ll nCr_mod_p(ll n_val, int r) {
    if (r < 0 || r > n_val) {
        return 0;
    }
    if (r == 0) {
        return 1;
    }
    // Since r <= 10^5, r is always smaller than MOD
    
    // Numerator: n * (n-1) * ... * (n-r+1)
    ll num = 1;
    ll n_mod = n_val % MOD;
    for (int i = 0; i < r; ++i) {
        ll term = (n_mod - i + MOD) % MOD;
        num = (num * term) % MOD;
    }
    
    // Denominator is r!
    ll den_inv = invFact[r];
    
    return (num * den_inv) % MOD;
}

void solve() {
    ll a, b, k;
    cin >> a >> b >> k;

    // Case 1: Only one color available.
    // The smallest grid that contains an a x b submatrix is an a x b grid.
    if (k == 1) {
        cout << a << " " << b << "\n";
        return;
    }
    
    // Case 2: k > 1.
    // We use the "Column-first" strategy which gives the lexicographically smallest pair.
    
    // Calculate n
    ll n_val = (a - 1) * k + 1;
    ll n_mod = n_val % MOD;
    
    // Calculate m
    if (b == 1) {
        // If b=1, we just need one column with the property, so m=1.
        cout << n_mod << " " << 1 << "\n";
        return;
    }
    
    // m_val = (b-1)k * C(n_val, a) + 1
    ll comb = nCr_mod_p(n_val, a);
    
    ll m_tmp = (b - 1) * k;
    ll m_mod = (m_tmp % MOD * comb) % MOD;
    m_mod = (m_mod + 1) % MOD;
    
    cout << n_mod << " " << m_mod << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute_factorials();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}