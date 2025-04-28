#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n; cin >> n;
	string s; cin >> s;
	if (n == 2) {
		if (s[0] == 'A') cout << "Alice" << endl;
		else cout << "Bob" << endl;
		return;
	}
	if (s[0] == s[n - 1]) {
		if (s[0] == 'A') cout << "Alice" << endl;
		else cout << "Bob" << endl;
		return;
	}
	else {
		if (s[0] == 'A') {
			if (count(s.begin(), s.end(), 'B') >= 2) cout << "Bob" << endl;
			else cout << "Alice" << endl;
		}
		else {
			if (s[n - 2] == 'A') cout << "Alice" << endl;
			else cout << "Bob" << endl;
		}
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