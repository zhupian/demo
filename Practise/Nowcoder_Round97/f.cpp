#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
const int M = 998244353;
#define int long long
#define endl '\n'
void fn() {
	int n, m; cin >> n >> m;
	vector<int> arr(n + 1, 0), brr(m + 1, 0);
	for (int i = 1; i <= n; i++) cin >> arr[i];
	for (int j = 1; j <= m; j++) cin >> brr[j];
	long long sum = 0, ans = 1;
	int j = 1, ma = 0;
	for (int i = 1; i <= n; i++) {
		if (arr[i] == brr[1]) break;
		if (arr[i] > brr[1]) {
			cout << -1 << endl;
			return;
		}
	}
	for (int j = n; j >= 1; j--) {
		if (arr[j] == brr[m]) break;
		if (arr[j] > brr[m]) {
			cout << -1 << endl;
			return;
		}
	}
	bool ok = false;
	for (int i = 1; i <= n; i++) {
		if (arr[i] == brr[j]) {
			ma = arr[i];
			j += 1;
			i += 1;
			ans = (ans * max(1LL, sum)) % M;
			sum = 1;
			ok = true;
		}
		if (j > m) break;
		if (ok == false) continue;
		if (arr[i] > brr[j] && arr[i] > brr[j - 1]) {
			cout << -1 << endl;
			return;
		}
		else if (arr[i] > brr[j] && arr[i] < brr[j - 1]) {
			sum = 1;
		}
		else if (arr[i] < brr[j] && arr[i] > brr[j - 1]) {
			ok = false;
		}
		else {
			sum += 1;
		}
	}
	if (j != m + 1) {
		cout << -1 << endl;
	}
	else {
		cout << ans << endl;
	}
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