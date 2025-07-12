#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n, k; cin >> n >> k;
	string s; cin >> s;
	int x = count(s.begin(), s.end(), '1');
	if (x <= k)
	{
		cout << "Alice" << endl;
		return;
	}
	if (2 * k <= n) {
		cout << "Bob" << endl;
		return;
	}
	cout << "Alice" << endl;
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