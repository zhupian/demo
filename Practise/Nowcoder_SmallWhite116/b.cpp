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
		sum += arr[i];
	}
	sum /= (n - 1);
	for (int i = 1; i <= n; i++) {
		cout << sum - arr[i] << ' ';
	}
	return 0;
}