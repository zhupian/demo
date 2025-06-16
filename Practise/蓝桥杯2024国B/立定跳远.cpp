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
	int n, m; cin >> n >> m;
	m += 1;
	vector<int> arr(n + 1, 0), d(n + 1, 0);
	int x = 0;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		d[i] = arr[i] - x;
		x = arr[i];
	}
	int l = 1, r = arr[n];
	while (l < r) {
		int mid = 1LL * l + r >> 1;
		int sum = 0, ans = 0;
		for (int i = 1; i <= n; i++) {
			if (d[i] > mid) ans += (d[i] - 1) / mid;
		}
		if (ans <= m) r = mid;
		else l = mid + 1;
	}
	cout << r;
	return 0;
}