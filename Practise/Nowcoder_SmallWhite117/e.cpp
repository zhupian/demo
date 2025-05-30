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
	vector<int> arr(n + 1, 0), t;
	unordered_map<int, int> mp;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin() + 1, arr.end());
	if (arr[n] == arr[1]) {
		cout << 0 << endl;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		if (mp[arr[i]] == 1) continue;
		else {
			t.push_back(arr[i]);
			mp[arr[i]] = 1;
		}
	}
	int sum = 0, ans = 0, f = t.size();
	for (int i = 0; i < t.size(); i++) {
		t[i] -= sum;
		if (t[i] <= 0) {
			if (i >= 1)
				f -= 1;
			continue;
		}
		int x = (t[i] + f - 1) / f;
		ans += x;
		sum += x * f;
		if (i >= 1)
			f -= 1;
	}
	cout << ans;
	return 0;
}