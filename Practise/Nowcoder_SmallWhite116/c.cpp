#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n, q; cin >> n >> q;
	vector<int> arr(n + 1, 0);
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	int l, r; cin >> l >> r;
	if (n == 1) {
		cout << arr[1] << endl;
		return;
	}
	int ans = 1LL * arr[1] + arr[2] - (arr[1] ^ arr[2]);
	for (int i = 3; i <= n; i++) {
		ans = (1LL * ans + arr[i] - (1LL * ans ^ arr[i]));
	}
	cout << ans << endl;
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