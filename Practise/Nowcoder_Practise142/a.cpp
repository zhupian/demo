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
	int sum = 0;
	vector<int> arr(n + 1, 0);
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		int t = arr[i], x = 1;
		if (t == 0) sum += 8;
		while (t) {
			if (t % 10 == 0) sum += x * 8;
			t /= 10;
			x *= 10;
		}
	}
	cout << sum;
	return 0;
}