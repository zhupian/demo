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
	int n; cin >> n;
	string s, t; cin >> s >> t;
	long long ans = 0;
	if (t[0] != t[1])
		ans = 1LL * n / 2 * (n - n / 2);
	else ans = 1LL * n * (n - 1) / 2;
	cout << ans << ' ';
	int sum = 0;
	if (n % 2 == 0) {
		for (int i = 0; i < n; i++) {
			if (i < n / 2) {
				if (s[i] != t[0])
					sum += 1;
			}
			else {
				if (s[i] != t[1])
					sum += 1;
			}
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			if (i < n / 2) {
				if (s[i] != t[0])
					sum += 1;
			}
			else if (i == n / 2) {
				if (s[i] != t[0] && s[i] != t[1])
					sum += 1;
			}
			else {
				if (s[i] != t[1]) sum += 1;
			}
		}
	}
	cout << sum;
	return 0;
}