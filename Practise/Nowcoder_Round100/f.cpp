#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;

ll fn(ll a, ll b, ll mod) {
    ll res = 1;
    while (b) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> b(2 * n);
    for (int i = 0; i < 2 * n; ++i) {
        cin >> b[i];
    }
    sort(b.begin(), b.end(), greater<int>());
    vector<ll> x;
    for (int k = n; k >= 1; k--) {
        x.push_back(k);
        x.push_back(k);
    }
    const int ma = 100;
    vector<ll> inv(ma + 1, 0);
    for (int i = 1; i <= ma; ++i) {
        inv[i] = fn(i, MOD - 2, MOD);
    }

    ll res = 0;
    for (int i = 0; i < 2 * n; ++i) {
        ll bi = b[i];
        ll xi = x[i];
        ll term = xi % MOD;
        term = term * 100 % MOD;
        term = term * inv[bi] % MOD;
        res = (res + term) % MOD;
    }

    cout << res << endl;
    return 0;
}