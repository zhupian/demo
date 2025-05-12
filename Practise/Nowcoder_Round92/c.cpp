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
	vector<int> arr(n + 1, 0);
	if (n >= 3) {
		cout << 1 << ' ' << n << ' ';
		for (int i = n - 1; i >= 2; i--) cout << i << ' ';
	}
	else cout << -1;
	return 0;
}