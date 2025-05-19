#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n; cin >> n;
	vector<int> arr(n + 1, 0);
	int x = 0;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		x += arr[i];
	}
	for (int i = 2; i <= n; i++) {
		if (arr[i] == 0 && arr[i - 1] == 0) {
			cout << "YES" << endl;
			return;
		}
	}
	if (x == n) cout << "YES" << endl;
	else
		cout << "NO" << endl;
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