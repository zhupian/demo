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
	int n, m; cin >> n >> m;
	string a, b; cin >> a >> b;
	sort(b.begin(), b.end());
	string ans;
	int i = 0, j = 0;
	while (i < n || j < m) {
		if (i == n) ans += b[j++];
		else if (j == m ) ans += a[i++];
		else {
			if (a[i] > b[j]) ans += b[j++];
			else ans += a[i++];
		}

	}
	cout << ans;
	return 0;
}