#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
const int M = 1e9 + 7;
#define int long long
#define endl '\n'
int fn(int x) {
	int a = 2, b = x, res = 1;
	while (b) {
		if (b & 1) res = (1LL * res * a) % M;
		b >>= 1;
		a = (1LL * a * a) % M;
	}
	return res - 1;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	unordered_map<int, int> mp;
	int n; cin >> n;
	int ans = 0, t = 1;
	vector<int> arr(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		mp[arr[i]] += 1;
	}
	for (int i = 0; i <= n; i++) {
		int sum = fn(mp[i]);
		t = (1LL * t * sum) % M;
		ans = (1LL * ans + sum) % M;
		if (i >= 1)
			ans = (1ll * ans + t) % M;
	}
	cout << ans ;
	return 0;
}