#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n; cin >> n;
	unordered_map<int, int> mp;
	unordered_map<int, bool> ok;
	vector<int> arr(n + 1, 0);
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		mp[arr[i]] += 1;
		ok[arr[i]] = false;
	}
	int ma = INT_MAX;
	for (int i = n; i >= 1; i--) {

		if (arr[i] < ma) ma = arr[i];
		else
		}
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