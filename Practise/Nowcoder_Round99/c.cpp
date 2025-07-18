#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int k; cin >> k;
	int x = k / 2;
	if (k == 0) {
		cout << 1 << endl;
		return;
	}
	if (k == 1) {
		cout << 4 << endl;
		return;
	}
	if (k % 2 == 1) {
		cout << 4;
		for (int i = 1; i <= x; i++) {
			cout << 8;
		}
		cout << endl;
		return;
	}
	else {
		for (int i = 1; i <= x; i++) {
			cout << 8;
		}
		cout << endl;
		return;
	}
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