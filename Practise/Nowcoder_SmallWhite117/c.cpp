#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int l, r; cin >> l >> r;
	if (l == r) {
		cout << -1 << endl;
		return;
	}
	long long x = 0, sum = r - l + 1;
	if (l != 1) {
		if (sum == 2)
		{
			cout << -1 << endl;
			return;
		}
	}
	if (l % 2 == 0) {
		x = (r - l + 2) / 2;
	}
	else {
		x = (r - l + 1) / 2;
	}
	cout << abs(sum - 2LL * x) << endl;
	return;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while (t--) {
		fn();
	}
	return 0;
}