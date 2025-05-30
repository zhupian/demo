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
	int a = 0, b = 0, c = 0, x = 0;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		x += arr[i];
		if (arr[i] == 1) a = 1;
		else if (arr[i] == -1) b = 1;
	}
	if (x == n || x == -n || (a + b == 1)) {
		cout << "NO";
	}
	else {
		cout << "YES";
	}
	return 0;
}