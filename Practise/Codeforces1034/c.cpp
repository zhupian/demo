#include <bits/stdc++.h>
using namespace std;
void solve() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	if (n == 1) {
		cout << "1" << endl;
		return;
	}
	vector<int> arrmin(n);
	vector<int> arrmax(n);
	arrmin[0] = arr[0];
	for (int i = 1; i < n; ++i)
		arrmin[i] = min(arrmin[i - 1], arr[i]);
	arrmax[n - 1] = arr[n - 1];
	for (int i = n - 2; i >= 0; i--)
		arrmax[i] = max(arrmax[i + 1], arr[i]);
	string ans = "";
	for (int i = 0; i < n; i++) {
		int lef = (i == 0) ? INT_MAX : arrmin[i - 1];
		int ri = (i == n - 1) ? INT_MIN : arrmax[i + 1];

		if (arr[i] < lef || arr[i] > ri) {
			ans += '1';
		} else {
			ans += '0';
		}
	}
	cout << ans << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}
