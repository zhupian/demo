#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n, j, k; cin >> n >> j >> k;
	vector<int> arr(n + 1, 0);
	int ma = 0;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		ma = max(ma, arr[i]);
	}
	if (k == 1 && ma != arr[j]) cout << "NO";
	else cout << "YES";
	cout << endl;
	return;
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