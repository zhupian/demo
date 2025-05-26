#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n; cin >> n;
	string s; cin >> s;
	int sum = 0, l = 0;
	bool ok = false;
	if (s[n - 1] == '1') {
		cout << "NO" << endl;
		return;
	}
	for (int i = 0; i < n - 1; i++) {
		if (s[i] == '1' ) {
			if (s[i + 1] == '1') {
				cout << "YES" << endl;
				return;
			}
			else {
				cout << "NO" << endl;
				return;
			}
		}
	}
	cout << "YES" << endl;
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