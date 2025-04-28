#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int a, b, c; cin >> a >> b >> c;
	int sum = a + b + c;
	if (sum % 3 != 0) {
		cout << "NO" << endl;
		return;
	}
	sum /= 3;
	if (a <= sum && b <= sum) cout << "YES" << endl;
	else cout << "NO" << endl;
	return;
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