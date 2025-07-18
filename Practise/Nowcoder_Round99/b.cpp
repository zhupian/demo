#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n; cin >> n;
	string s; cin >> s;
	int ma = 0;
	for (int i = 0; i < s.size(); i++) {
		ma = max(ma, (int)s[i] - '!' + 33);
	}
	cout << ma << endl;
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