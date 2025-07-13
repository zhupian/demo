#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n; cin >> n;
	int mex = -1;
	vector<int> arr(2 * n + 1, 0);
	for (int i = 1; i <= 2 * n; i++) {
		cin >> arr[i];
		if (mex == -1) mex = arr[i];
		else {
			if (mex == arr[i]) mex = -1;
		}
	}
	if (mex == -1) cout << "Yes";
	else cout << "No";
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