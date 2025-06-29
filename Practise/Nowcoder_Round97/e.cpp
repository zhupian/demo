#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n; cin >> n;
	long long x = n * (n + 1) / 2;
	if (x % 2 != 0) {
		cout << -1 << endl;
		return;
	}
	int f = n / 2;
	if (n % 2 == 0) {
		for (int i = 1; i <= f; i++) {
			cout << i << ' ' << n - i + 1 << ' ';
		}
	}
	else {
		cout << n << ' ';
		for (int i = 1; i <= f; i++) {
			cout << i << ' ' << n - i << ' ';
		}
	}
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