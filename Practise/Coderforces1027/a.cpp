#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	string s; cin >> s;
	int x = 0;
	for (int i = 0; i <= 3; i++) {
		x *= 10;
		x += s[i] - '0';
	}
	for (int i = 0; i <= 100; i++) {
		if (i * i == x) {
			cout << 0 << ' ' << i << endl;
			return;
		}
	}
	cout << -1 << endl;
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