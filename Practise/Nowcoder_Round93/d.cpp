#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n, k; cin >> n >> k;
	vector<int> arr(n + 1, 0), p(n + 1, 0);
	unordered_map<int, int> mp;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	memcpy(p.data(), arr.data(), (n + 1) * sizeof(long long));
	sort(p.begin() + 2, p.end());
	for (int i = n; k; i--) {
		k -= 1;
		mp[p[i]] += 1;
	}
	for (int i = n; i >= 2; i--) {
		if (mp[arr[i]] >= 1) {
			arr[1] += arr[i];
			arr[i] = -1;
			mp[arr[i]] -= 1;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (arr[i] != -1) cout << arr[i] << ' ';
	}
	cout << endl;
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