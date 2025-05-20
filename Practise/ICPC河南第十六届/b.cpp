#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using i64 = long long;
using u64 = unsigned long long;
void solve() {
    ll n;
    cin >> n;
    ll lg = __lg(n);
    if (n + 1 == 1LL << (lg + 1)) {
        cout << n << "\n";
    } else cout << (1LL << lg) - 1 << "\n";

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

