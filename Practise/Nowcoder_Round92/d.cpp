#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
typedef long long ll;
#define endl '\n'
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll k; cin >> k;
	for (ll i = 1; i <= k / i; i++) {
		ll x = k - i;
		ll y = i + 1;
		if (x % y == 0) {
			ll x2 = x / y;
			ll x1 = i;
			cout << x1 + x2 << ' ' << 1LL * x1*x2;
			return 0;
		}
	}
	cout << -1;
	return 0;
}