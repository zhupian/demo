#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define endl '\n'
void fn() {
	int n; cin >> n;
	vector<char> arr(n);
	int a = 0, b = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] == arr[0]) a += 1;
		else b += 1;
	}
	bool ok = true;
	if (set(arr.begin(), arr.begin() + a).size() == 2) cout << 2;
	else cout << 1 + min(3, b);
	cout << endl;
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