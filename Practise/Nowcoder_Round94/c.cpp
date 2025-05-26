#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int x; cin >> x;
	if (__builtin_popcount(x) == 1) {
		cout << -1 << endl;
		return;
	}
	for (int i = 30; i >= 0; i--) {
		if (x >> i & 1) {
			cout << (1 << i) << endl;
			return;
		}
	}
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