#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n, m; cin >> n >> m;
	if (n != m && (n == 0 || m == 0)) {
		cout << "No" << endl;
		return;
	}
	else {
		cout << "Yes" << endl;
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