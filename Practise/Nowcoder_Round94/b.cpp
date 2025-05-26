#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n; cin >> n;
	int mi = INT_MAX;
	vector<pair<int, int>> arr(3);
	for (int i = 0; i < 3; i++) {
		int x, y; cin >> x >> y;
		arr[i].first = x;
		arr[i].second = y;
	}
	sort(arr.begin(), arr.end());
	do {
		int x = n;
		for (int i = 0; i < 3; i++) {
			if (x >= arr[i].first) x -= arr[i].second;
		}
		mi = min(x, mi);
	} while (next_permutation(arr.begin(), arr.end()));
	cout << max(mi, 0LL) << endl;
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