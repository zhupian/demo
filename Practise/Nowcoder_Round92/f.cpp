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
	//由于排列的矩阵中每个数字都出现了两次
	//故每一行所有元素的异或和、每一列所有元素的异或和的异或和一定为0
	//进而 => 1^2^3^……^n+m==0
	int ans = 0;
	for (int i = 1; i <= n + m; i++)
		ans ^= i;
	if (ans != 0) {
		cout << -1;
		return 0;
	}

	return 0;
}