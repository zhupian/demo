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
	vector<pair<int, int>> t;
	unordered_map<int, int> mp;
	set<int> st;
	int ma = 0;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		mp[arr[i]] += 1;
	}
	for (auto &[x, y] : mp) {
		t.push_back({y, x});
	}
	sort(t.begin(), t.end());
	if (t[n - 1].first - t[n - 2].first >= 3) {
		cout << t[n - 1].second;
	}
	else if ()
		for (auto x : st) {
			cout << x << ' ';
		}
	return 0;
}