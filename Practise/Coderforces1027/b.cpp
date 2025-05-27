#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n, k; cin >> n >> k;
	string s; cin >> s;
	int x1 = count(s.begin(), s.end(), '1');
	int x2 = n - x1;
	int f = n / 2 - k;//不对的个数
	x2 -= f;
	x1 -= f;
	if (x1 >= 0 && x2 >= 0 && x1 % 2 == 0 && x2 % 2 == 0) {
		cout << "YES" << endl;
		return;
	}
	cout << "NO" << endl;
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