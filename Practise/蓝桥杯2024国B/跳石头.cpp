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
	vector<set<int>> st(n + 1);
	int ma = 0;
	for (int i = n; i >= 1; i--) {
		if (i * 2 <= n) st[i].insert(st[i * 2].begin(), st[i * 2].end());
		if (i + arr[i] <= n) st[i].insert(st[i + arr[i]].begin(), st[i + arr[i]].end());
		st[i].insert(arr[i]);
		ma = max(ma, (long long)st[i].size());
	}
	cout << ma;
	return 0;
}