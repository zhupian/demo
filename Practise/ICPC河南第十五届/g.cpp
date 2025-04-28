#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n; cin >> n;
	if (n <= 3) cout << 0 << endl;
	else {
		long long x = n - 2;
		long long sum = 1LL * x * (x - 1) / 2;
		cout << sum << endl;
	}
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//int t=1;
	int t; cin >> t;
	while (t--) {
		fn();
	}
	return 0;
}