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
	long long ma = 0, t = 0, l = 1;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		t += arr[i];
		if (i - l + 1 > 10) t -= arr[l++];
		ma = max(ma, t);
	}
	cout << ma;
	return 0;
}