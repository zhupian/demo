#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n; cin >> n;
	vector<int> arr(n + 1, 0);
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	vector<int> arrmin(n + 2, 0);
	vector<int> arrmax(n + 2, 0);
	arrmin[1] = arr[1];
	for (int i = 2; i <= n; i++) {
		arrmin[i] = min(arrmin[i - 1], arr[i]);
	}
	arrmax[n] = arr[n];
	for (int i = n - 1; i >= 1; i--) {
		arrmax[i] = max(arrmax[i + 1], arr[i]);
	}
	string ans = "";
	ans += '1';
	for (int i = 2; i < n; i++) {
		if (arr[i] == arrmin[i]) ans += '1';
		else if (arr[i] == arrmax[i]) ans += '1';
		else ans += '0';
	}
	ans += '1';
	cout << ans << endl;
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