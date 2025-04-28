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
	int ma = 0;
	set<int> set;
	for (int i = 1; i <= n; i++) {
		int x; cin >> x;
		set.insert(x);
	}
	for (auto x : set) {
		for (auto y : set) {
			ma = max(ma, x | y);
		}
	}
	cout << ma;
	return 0;
}