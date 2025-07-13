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
	int ans = 0, ma = 0;
	unordered_map<int, int> mp, sum;
	int l = -1, r = -1;
	vector<int> arr(2 * n + 1, 0);
	for (int i = 1; i <= 2 * n; i++) {
		cin >> arr[i];
		mp[arr[i]] += 1;
		if (mp[arr[i]] == 2) {
			ans += i - sum[arr[i]] - 1;
		}
		sum[arr[i]] = i;
		if (mp[arr[i]] == 2 && l == -1) l = i;
	}
	unordered_map<int, int> bp;
	for (int i = 2 * n; i >= 1; i--) {
		bp[arr[i]] += 1;
		if (bp[arr[i]] == 2 && r == -1) r = i;
	}
	unordered_map<int, int> cp;
	for (int i = r + 1; i <= r - 1; i++) {
		cp[arr[i]] += 1;
		if (cp[arr[i]] == 1) {
			ma = max(ma, i - l - 1);
		}
		else {
			ma = max(ma, r - i - 1);
		}
	}
	cout << ma + ans << endl;
	return 0;
}