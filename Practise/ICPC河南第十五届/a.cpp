#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
int arr[4];
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x; cin >> x;
		sum += x;
		arr[x] += 1;
	}
	if (sum & 1) {
		cout << "NO";
		return 0;
	}

	return 0;
}