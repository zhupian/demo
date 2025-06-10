#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int d, p, q; cin >> d >> p >> q;
    int x = __gcd(d, p);
    for (int i = 1; i <= q; i++) {
        int l, r; cin >> l >> r;
        int t = p / x;
        if (p == 1) {
            if (l == 1 && r > 1) {
                cout << 2 << endl;
            }
            else {
                cout << 1 << endl;
            }
        }
        else {
            cout << min(r - l + 1, t) << endl;
        }

    }
    return 0;
}