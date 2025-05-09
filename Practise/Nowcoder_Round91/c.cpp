#include<bits/stdc++.h>
using namespace std;

#define int long long

const int N = 1e5 + 10;
int a[N + 10];
void solve() {
	int n; cin >> n;
	int ma = 0, ans = 0;
	for (int i = 1; i <= n; i++) {
		int x; cin >> x;
		if (x < ma) {
			ans = max(ans, ma + x);
		} else ma = max(ma, x);
	}
	cout << ans << "\n";
}
signed main() {
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}