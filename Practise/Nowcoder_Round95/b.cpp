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
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	int q; cin >> q;
	for (int i = 1; i <= q; i++) {
		int l, r; cin >> l >> r;
		cout << arr[l] << ' ';
		for (int i = l + 1; i <= r; i++) {
			cout << arr[i] - arr[i - 1] << ' ';
		}
		cout << endl;
	}
	return 0;
}