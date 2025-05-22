#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, ans = 0, t = 0; cin >> n;
	string s; cin >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] == '0') {
			t += 10;
			ans += t;
		}
		else if (s[i] == '1') {
			if (t >= 5) t -= 5;
			else t = 0;
			ans += t;
		}
		else {
			ans += max(t - 10, 0LL);
		}

	}
	cout << ans;

	return 0;
}