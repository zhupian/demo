#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n; cin >> n;
	vector<int> arr(n + 1, 0);
	unordered_map<int, int> mp;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		mp[arr[i]] += 1;
	}
	sort(arr.begin() + 1, arr.end());
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		int x = arr[i];
		while (mp[x + 1]) {
			mp[x + 1] = 0;
			x += 1;
		}
		if (x == arr[i]) {
			ans += mp[x];
			mp[x] = 0;
		}
		else {
			ans += 1;
			mp[arr[i]] = 0;
		}
	}
	cout << ans - 1  << endl;

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