#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int ans = 0;
	set<int> s;
	for (int i = n - 1; i >= 0; --i) {
		auto it = s.lower_bound(a[i]);
		if (it != s.begin()) {
			--it;
			ans = max(ans, a[i] + *it);
		}
		s.insert(a[i]);
	}
	cout << ans << '\n';
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//int t=1;
	int t; cin >> t;
	while (t--) {
		fn();
	}
	return 0;
}