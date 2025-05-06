#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n, m; cin >> n >> m;
	vector<string > arr(n + 1);
	vector<int> r(n + 1, 0), c(m + 1, 0);
	int x = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == '1')
			{
				r[i] += 1;
				c[j] += 1;
			}

			if (arr[i][j] == '1') x += 1;
		}
	}
	int t1 = 0, f = 0, k = 0, t2 = 0;
	for (int i = 0; i < n; i++) {
		if (r[i] == m) t1 += 1;
		else if (r[i] == m - 1) f += 1;
	}
	for (int j = 0; j < m; j++) {
		if (c[j] == n) t2 -= 1;
		else if (c[j] == n - 1) k += 1;
	}
	if (x == 0 || (t1 == 2 && x == 2 * m) || (t2 == -2 && x == 2 * n)) {
		cout << "YES" << endl;
		return;
	}
	if (k == 1 && f == 1 && x == (m + n - 2)) {
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
	//int t=1;
	int t; cin >> t;
	while (t--) {
		fn();
	}
	return 0;
}