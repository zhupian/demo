#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int x, y; cin >> x >> y;
	int gcd = __gcd(x, y);
	if (gcd + min(x, y) > max(x, y)) cout << "Yes";
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