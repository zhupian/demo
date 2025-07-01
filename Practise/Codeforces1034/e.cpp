#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n; cin >> n;
	vector<int> arr(n + 1, 0);
	unordered_map<int, int> mp, skp;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		mp[arr[i]] += 1;
	}
	for (int i = 0; i <= n; i++) {
		int mi = mp[i];
		int k = n - i + 1 ;
		if (mi + 1 <= k) {
			skp[mi] += 1;
			if (k  <= n) skp[k] -= 1;
		}
		if (mp[i] == 0) break;
	}
	int ans = 0;
	for (int j = 0; j <= n; j++) {
		cout << 1LL * ans + skp[j] << ' ';
		ans = 1ll * ans + skp[j];
	}
	cout << endl;
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