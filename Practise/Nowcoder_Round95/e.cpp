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
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	int a = INT_MAX, b = INT_MAX;
	unordered_map<int, int> mp;
	for (int i = 1; i <= n; i++) {
		mp[arr[i]] += 1;
		if (mp[arr[i]] == 2) {
			a = 1LL * arr[i] * (n - i + 1);
			break;
		}
	}
	mp.clear();
	for (int i = n; i >= 1; i--) {
		mp[arr[i]] += 1;
		if (mp[arr[i]] == 2) {
			b = 1LL * arr[i] * i;
			break;
		}
	}
	cout << min(a, b);
	return 0;
}