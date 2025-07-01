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
	int n; cin >> n;
	vector<int> arr(n + 1, 0);
	unordered_map<int, int> mp;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		mp[arr[i]] += 1;
	}
	int ma = 0;
	for (auto &[x, y] : mp) {
		ma = max(ma, 1LL * x * x * y);
	}
	cout << ma;
	return 0;
}